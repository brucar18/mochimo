#!/bin/bash
#screen -S mochimoMiner

git clone https://github.com/JoeY34kaze/mochimo
chmod -R a+rwx mochimo

while true
do
cd mochimo/mochi-beta/bin/
nohup ./gomochi d -t3 > mochiminer.log &
sleep 2
done
