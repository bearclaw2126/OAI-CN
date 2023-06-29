
import sys
import re
import time
import subprocess
import os
from subprocess import run
#files accssed by this script
gNB = 'oai-gnb'
docker = 'docker-compose.yaml'
CN = f'mysql oai-nrf oai-amf oai-smf oai-spgwu oai-ext-dn'
UE = 'oai-ue'
#Deploy Core Network
#put the path of the yaml file here
os.chdir("/mnt/c/Users/rex12/Desktop/work/oai-develop/openairinterface5g-develop/oai-all/ci-scripts/yaml_files/5g_rfsimulator")
#cmd = 'docker-compose  up -d mysql oai-nrf oai-amf oai-smf oai-spgwu oai-ext-dn'
#launch = subprocess.Popen(cmd, shell=True, stdout=subprocess.PIPE)


    #check health
cmd_check = f'docker ps -a'
subprocess.run(cmd_check, shell=True, stdout=subprocess.PIPE)

#Deploy OAI gNB in RF simulator mode, Popen function will keep process running parrallel whle .run wraps it with a popen.communicate() which waits for the process to finish 
docker_launch = f'docker-compose -f {docker} up -d "{gNB}"'
subprocess.run(docker_launch, shell=True)
    
#check health
subprocess.run(cmd_check, shell=True)
#Deploy UE in standalone mode
cmd2 = f'docker-compose -f {docker} up -d {UE}'

subprocess.run(cmd, shell=True, stdout=subprocess.PIPE)
   
#check health
subprocess.run(cmd_check, shell=True, stdout=subprocess.PIPE)

#else:
    #print("Error in launching the containers")
    #sys.exit(1)