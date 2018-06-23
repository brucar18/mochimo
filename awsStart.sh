#!/bin/bash
screen -S mochimoMiner
git clone https://github.com/JoeY34kaze/mochimo
chmod -R a+rwx mochimo
a=0
while [ $a -lt 10 ]
do
cd mochimo/mochi-beta/bin/
nohup ./gomochi d -t3 > output.txt
sleep 2
done
