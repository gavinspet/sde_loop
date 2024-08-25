#!/usr/bin/bash

echo "$0" #run command
echo "$1" #first argument
echo "$2" #second argument
echo "$3" #third argument

# $@ contains info about all the arguments
args=("$@") # no spaces around =
echo ${args[0]}

#printing all once
echo $@

#number of arguments
echo $#




