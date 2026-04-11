#!/usr/bin/bash

# while read p
# do
#    echo $p
# done < read_content.sh


# cat read_content.sh | while read p
# do
#    echo $p
# done

while IFS= read -r line
do
   echo $line
done < hello.sh