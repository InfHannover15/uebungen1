#!/bin/bash
#size=`tput cols`
while true; do
color=$(</dev/urandom tr -dc '0123456789' | head -c 2)
echo -en "\033["$color"m"
</dev/urandom tr -dc '01' | head -c 2
done
