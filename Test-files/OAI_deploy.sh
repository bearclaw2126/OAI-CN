#This is a deploy script for ease of use
#Assumes prequyistes are installed docker,git

mkdir ~/work

cd ~/work

sudo apt install libsctp-dev  cmake-curses-gui libpcre2-dev

git clone https://gitlab.eurecom.fr/oai/openairinterface5g.git oai
cd oai/

#build OAI
cd cmake_targets
./build_oai -I -w USRP --phy_simulators
./build_oai -w SIMU --gNB --nrUE --ninja

cd ~/work

#build free5gc
git clone https://gitlab.eurecom.fr/oai/cn5g/oai-cn5g-fed.git 5gc

#cd 5gc/docker-compose 

#sudo python3 ./core-network.py --type start-mini --scenario 1




