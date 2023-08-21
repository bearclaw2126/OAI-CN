 
 sudo apt-get install autoconf automake build-essential ccache cmake cpufrequtils doxygen ethtool g++ git inetutils-tools libboost-all-dev libncurses5 libncurses5-dev libusb-1.0-0 libusb-1.0-0-dev libusb-dev python3-dev python3-mako python3-numpy python3-requests python3-scipy python3-setuptools python3-ruamel.yaml

 cd $HOME/git
   mkdir $HOME/git
    cd $HOME/git
   git clone http://github.com/EttusResearch/uhd.git
     cd uhd/host
   mkdir build
   cd build
   git checkout v4.3.0.0
      cmake ../
   make -j4
   sudo make install
   sudo ldconfig
export PYTHONPATH=/usr/local/lib/python3/dist-packages:/usr/local/lib/python3.7/site-packages:/usr/local/lib/python3/dist-packages:$PYTHONPATH
export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
cd $HOME/git
git clone https://gitlab.eurecom.fr/oai/cn5g/oai-cn5g-fed.git 5gc
