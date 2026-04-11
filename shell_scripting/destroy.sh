#!/usr/bin/bash

# Loop through all directories in the current directory
for dir in */; do
  # Navigate into the directory
  cd "$dir" || exit
  
  # Create hello.txt file in the current directory
#   touch hello.txt
    rm -rf hello.txt
  
  # Return to the original directory
  cd ..
done
