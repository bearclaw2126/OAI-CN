#This is a deploy script for ease of use
#Assumes prequyistes are installed docker,git

mkdir ~/work

cd ~/work
#Enables multilanguae support  for xApps 
#xApps will allow custom applications to made for analyctical purposes
git clone https://github.com/swig/swig.git
cd swig
./autogen.sh
./configure --prefix=/usr/
make
make install
sudo apt install libsctp-dev python3.8 cmake-curses-gui libpcre2-dev python-dev
git clone https://gitlab.eurecom.fr/oai/openairinterface5g.git oai
cd oai/
git checkout e2_sub

#build OAI
cd cmake_targets
./build_oai -I -w SIMU --gNB --nrUE -e2 --ninja -y



cd ../..
git clone https://gitlab.eurecom.fr/mosaic5g/flexric flexric
cd flexric/
git checkout mir_dev

#This will build the flexric software

mkdir build && cd build && cmake .. && make

sudo make install
