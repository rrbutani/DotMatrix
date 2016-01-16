#!/bin/bash
#Time Server for the Arduino Dot Matrix

#Takes the address of the Arduino serial por as an argument (Ex: /dev/ttyACM0)
declare -i CYCLES
declare -i FPS
declare -i DELAY

#CYCLES = 200
#FPS = 100

let "CYCLES = 200"
let "FPS = 100"

let "DELAY = CYCLES / FPS"

echo $DELAY

#//Do stty setup w/ variable 1
sudo stty -f $1 cs8 9600 ignbrk -brkint -icrnl -imaxbel -opost -onlcr -isig -icanon -iexten -echo -echoe -echok -echoctl -echoke noflsh -ixon -crtscts

#//start the seperate thread to keep the connection open
{ sudo tail -f $1 & }

echo "Running"

echo -n "~" > $1 

#echo "$" + last 4 digits of time + ; + 4; + $FPS + ; + CYCLES + ; + 0

#uptime=$(</proc/uptime)
#uptime=${uptime%%.*}


for count in {1..10..2}
do
    echo -n "~" > $1
    echo -n "A" > $1
    echo -n "$count" > $1
    echo -n "4;" > $1
    echo -n "$FPS" > $1
    echo -n ";" > $1
    echo -n "$CYCLES" > $1
    echo -n ";" > $1
    echo -n "0" > $1
    sleep $DELAY
done


#while(1)
#{

#if(newuptime - olduptime % 60 

#}
