#!//usr/bin/bash

# Case Statement Example
echo "Case Statement Example:"
echo "----------------------"

# Prompt the user for input
echo "Please enter a fruit (apple, banana, orange, or grape):"
read fruit

# Use a case statement to process the input
case "$fruit" in
    "apple")
        echo "You chose an apple."
        ;;
    "banana")
        echo "You chose a banana."
        ;;
    "orange")
        echo "You chose an orange."
        ;;
    "grape")
        echo "You chose a grape."
        ;;
    *)
        echo "Invalid choice. Please enter one of: apple, banana, orange, or grape."
        ;;
esac
