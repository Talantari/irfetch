#!/bin/sh
# VaRS.sh - script to echo shell variables to vars.h
get_kernel=$(uname -s)
get_kernel_ver=$(uname -r)
get_shell=$(echo $SHELL)
#get_hostname=$(cat /etc/hostname)
if command -v hostname > /dev/null 2>&1; then
	get_hostname=$(hostname)
else
	get_hostname=$(sysctl -n kern.hostname) # for openbsd
fi
file="./vars.h"


touch $file
echo "#include <stdio.h>" | tee -a $file
echo "#define get_kernel \"$get_kernel\" " | tee -a $file
echo "#define get_kernel_ver \"$get_kernel_ver\" " | tee -a $file
echo "#define get_shell \"$get_shell\" " | tee -a $file
echo "#define get_hostname \"$get_hostname\" " | tee -a $file
echo "Vars echoed succsesfully."
exit 0
