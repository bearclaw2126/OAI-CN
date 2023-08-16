#Starts the OAI EPC and eNB and near RT RIC as well as KPM and RCxApp
# This script is to be run on the OAI host machine
#start gNB
cd ~/work/oai/cmake_targets/ran_build/build
sudo ./nr-softmodem RFSIMULATOR=server -O ~/summerworkshop2023/oam/conf/gnb.sa.band78.fr1.106PRB.usrpb210.conf --gNBs.[0].min_rxtxtime 6 --rfsim --sa
#nrUE
cd oai/cmake_targets/ran_build/build
sudo RFSIMULATOR=127.0.0.1 ./nr-uesoftmodem -r 106 --numerology 1 --band 78 -C 3619200000 --nokrnmod --rfsim --sa --uicc0.imsi 001010000000001

#start near RT RIC
cd flexric
./build/examples/ric/nearRT-RIC

#start KPM+ RC xApp
cd flexric
./build/examples/xApp/c/kpm_rc/xapp_kpm_rc 
