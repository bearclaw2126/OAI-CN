#Starts the OAI EPC and eNB and near RT RIC as well as KPM and RCxApp
# This script is to be run on the OAI host machine
#start gNB
cd ~/work/oai/cmake_targets/ran_build/build
sudo RFSIMULATOR=server ./ran_build/build/nr-softmodem --rfsim --sa -O ~/work/oai/ci-scripts/conf_files/gnb.sa.band78.106prb.rfsim.conf
#nrUE
cd oai/cmake_targets/ran_build/build
sudo RFSIMULATOR=127.0.0.1 ./nr-uesoftmodem -r 106 --numerology 1 --band 78 -C 3619200000 --nokrnmod --rfsim --sa -O ~/work/oai/ci-scripts/conf_files/ue.sa.band78.106prb.rfsim.conf
