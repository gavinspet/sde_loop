#!/usr/bin/bash

# Arithmetic Calculation with Floating-Point Numbers
echo "Arithmetic Calculation with Floating-Point Numbers:"
echo "--------------------------------------------------"

# Define two floating-point numbers
num1=3.5
num2=2.2

# Perform arithmetic operations
sum=$(echo "$num1 + $num2" | bc)
difference=$(echo "$num1 - $num2" | bc)
product=$(echo "$num1 * $num2" | bc)
quotient=$(echo "scale=2; $num1 / $num2" | bc)

# Display the results
echo "Sum: $num1 + $num2 = $sum"
echo "Difference: $num1 - $num2 = $difference"
echo "Product: $num1 * $num2 = $product"
echo "Quotient: $num1 / $num2 = $quotient"
