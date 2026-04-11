#!/usr/bin/bash

echo -e "Enter one number : \c"

read a

if [ "$a" -eq 0 ]
    then echo "you entered $a"
else
    echo "kya yaar"
fi

num1=10

echo $(( a + num1 ))

