import yaml
import time
import logging
import subprocess
import os



subprocess.run(["docker-compose", "-f", "oai-cn5g-fed/docker-compose/docker-compose-ueransim-vpp.yaml", "up","-d"])

ueran_logs = subprocess.run(["docker", "logs","ueransim"])

print(ueran_logs.returncode)
#Create Core network setup later and 