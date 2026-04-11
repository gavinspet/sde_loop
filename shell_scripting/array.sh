#!/usr/bin/bash


echo "Hey this is array specific script"


arr=('a' 'b' 'c')

arr[6]='d'
arr[7]='d'

echo "${arr[@]}"
echo "${#arr[@]}"    #shows total number of elements
echo "${!arr[@]}"    #shows all the keys of array
# echo "${arr[0]}"
# echo "${arr[1]}"
# echo "${arr[2]}"
# echo "${arr[3]}"
# echo "${arr[6]}"