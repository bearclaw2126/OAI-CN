#This is a deployment script to simplify the setup of OAIC on a new server.
#This installs the ZeroMQ OAIC version from OAIC manual


git clone https://github.com/openaicellular/oaic.git

cd oaic

git submodule update --init --recursive --remote

sudo apt-get install -y "build-essential cmake libfftw3-dev libmbedtls-dev libboost-program-options-dev libconfig++-dev libsctp-dev libtool autoconf"
sudo apt-get install -y "libzmq3-dev"
sudo apt-get install -y "nginx"


cd RIC-Deployment/tools/k8s/bin

./gen-cloud-init.sh

sudo "./k8s-1node-cloud-init-k_1_16-h_2_17-d_cur.sh"


output=$(sudo kubectl get pods -A | grep -c "Running")
if [[ $output == 9]]; then
    echo "All Kubernetes are is running"
else
    echo "Not All cluster pods are not running"
    exit 1

fi

#Install the nfs common packages
sudo helm install stable/nfs-server-provisioner --namespace ricinfra --name nfs-release-1
sudo kubectl patch storageclass nfs -p '{"metadata": {"annotations":{"storageclass.kubernetes.io/is-default-class":"true"}}}'
sudo apt install nfs-common

sudo docker run -d -p 5001:5000 --restart=always --name ric registry:2

cd ../../../../ric-plt-e2
#PAckaging docker images
cd RIC-E2-TERMINATION
sudo docker build -f Dockerfile -t localhost:5001/ric-plt-e2:5.5.0 .
sudo docker push localhost:5001/ric-plt-e2:5.5.0
cd ../../
#Deploy the  near-RT RIC platform
cd RIC-Deployment/bin
sudo ./deploy-ric-platform -f ../RECIPE_EXAMPLE/PLATFORM/example_recipe_oran_e_release_modified_e2.yaml

#srsRAN installation
cd ../../asn1c
# git checkout velichkov_s1ap_plus_option_group
autoreconf -iv
./configure
make -j4
sudo make install
sudo ldconfig
cd ..

cd srsRAN-e2
mkdir build
export SRS=`realpath .`
cd build
cmake ../ -DCMAKE_BUILD_TYPE=RelWithDebInfo \
    -DRIC_GENERATED_E2AP_BINDING_DIR=${SRS}/e2_bindings/E2AP-v01.01 \
    -DRIC_GENERATED_E2SM_KPM_BINDING_DIR=${SRS}/e2_bindings/E2SM-KPM \
    -DRIC_GENERATED_E2SM_GNB_NRT_BINDING_DIR=${SRS}/e2_bindings/E2SM-GNB-NRT
make -j`nproc`
sudo make install
sudo ldconfig
sudo srsran_install_configs.sh service
cd ../../

#start srsRAN
sudo ip netns add ue1
sudo srsepc
#start srsRAN en-gNB 
export E2NODE_IP=`hostname  -I | cut -f1 -d' '`
export E2NODE_PORT=5006
export E2TERM_IP=`sudo kubectl get svc -n ricplt --field-selector metadata.name=service-ricplt-e2term-sctp-alpha -o jsonpath='{.items[0].spec.clusterIP}'`

sudo srsenb --enb.n_prb=50 --enb.name=enb1 --enb.enb_id=0x19B \
--rf.device_name=zmq --rf.device_args="fail_on_disconnect=true,tx_port0=tcp://*:2000,rx_port0=tcp://localhost:2001,tx_port1=tcp://*:2100,rx_port1=tcp://localhost:2101,id=enb,base_srate=23.04e6" \
--ric.agent.remote_ipv4_addr=${E2TERM_IP} --log.all_level=warn --ric.agent.log_level=debug --log.filename=enbLog.txt --ric.agent.local_ipv4_addr=${E2NODE_IP} --ric.agent.local_port=${E2NODE_PORT}

echo "Waiting for RIC state to establish"
sleep 45

#start srsRAN UE
sudo srsue --gw.netns=ue1

output2=$(sudo ip netns exec ue1 ping 172.16.0.1 -c 3)




