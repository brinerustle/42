ifconfig en0 | grep ether -w | awk -F " " '{ print $2 }'
