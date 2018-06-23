#!/bin/bash
git clone https://github.com/JoeY34kaze/mochimo
chmod -R a+rwx mochimo
cd mochimo/mochi-beta/bin/
nohup ./gomochi d -t3 > output.txt &