#!/usr/bin/bash

a=1

while (( a <= 3 ))
do
   echo "$a"
   (( ++a ))
   sleep 1
   gnome-terminal &
done