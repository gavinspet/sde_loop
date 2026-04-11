 #!/bin/bash

# Simple example of if, elif, and else statements

# Let's assume we want to check the time of day and give a greeting accordingly.

current_hour=$(date +"%H")  # Get the current hour in 24-hour format

# Check the current hour and give a greeting
if [ "$current_hour" -lt 12 ]; then
    echo "Good morning!"
elif [ "$current_hour" -lt 18 ]; then
    echo "Good afternoon!"
else
    echo "Good evening!"
fi
