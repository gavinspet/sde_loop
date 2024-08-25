#!/bin/bash

# Logical AND (&&) Operator
echo "Logical AND (&&) Operator:"
echo "-------------------------"

# Define two variables
a=5
b=10

if [ $a -gt 0 ] && [ $b -gt 0 ]; then
    echo "Both a and b are greater than 0."
else
    echo "At least one of them is not greater than 0."
fi

echo

# Logical OR (||) Operator
echo "Logical OR (||) Operator:"
echo "------------------------"

# Define two variables
x=15
y=0

if [ $x -eq 0 ] || [ $y -eq 0 ]; then
    echo "Either x or y is equal to 0."
else
    echo "Neither x nor y is equal to 0."
fi

echo

# Logical NOT (!) Operator
echo "Logical NOT (!) Operator:"
echo "------------------------"

# Define a variable
p=true

if ! $p; then
    echo "p is false."
else
    echo "p is true."
fi
