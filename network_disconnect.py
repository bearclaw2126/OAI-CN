import sys
import re
import time
import subprocess
import os

network = f'docker network disconnect {sys.argv[1]} {sys.argv[2]}'
remove = f'docker network rm {sys.argv[1]}'
subprocess.run(network, shell=True, stdout=subprocess.PIPE)
subprocess.run(remove, shell=True, stdout=subprocess.PIPE)
time.sleep(3)