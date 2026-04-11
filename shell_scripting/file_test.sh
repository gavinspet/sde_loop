#!/usr/bin/bash

echo -e "Enter file to check present or not \c"
read file_name

if [ -e "$file_name" ]; then
    echo "$file_name found"
else
    echo "$file_name not found"
fi
