#!/bin/sh
echo -e "\nbuilding irfetch.."
sh vars.sh
clang irfetch.c -o irfetch
cp irfetch /usr/local/mph/bin/irfetch
