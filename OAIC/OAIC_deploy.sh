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


