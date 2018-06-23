#!/bin/bash

git clone https://github.com/JoeY34kaze/mochimo
chmod -R a+rwx mochimo
#cd mochimo/mochi-beta/bin/

#while true
#do
#nohup ./gomochi d -t3 > mochiminer.log &
#sleep 2
#done

~/mochimo/mochi-beta/bin/gomochi d -t3 >> ~/mochi.log
