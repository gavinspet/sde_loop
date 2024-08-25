#!/usr/bin/bash

echo -e "Enter file to check present or not \c"
read file_name

if [ -e "$file_name" ]
then
     if [ -w "$file_name" ]
     then
       echo "Type some text data. Press ctrl+d to quit "
       cat >> "$file_name"
     else
       echo "File does not have write permission"
     fi
    
else
    echo ""$file_name" not found"
fi
