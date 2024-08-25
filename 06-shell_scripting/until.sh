#!/usr/bin/bash


n=1

until (( n >= 10 )) #runs until comditon is false
do 
   echo "$n"
   (( ++n ))
done