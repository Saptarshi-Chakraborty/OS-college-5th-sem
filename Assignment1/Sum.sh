# !/bin/bash
# write a bash script to take two numbers as input and print their sum

echo "Hello world"
echo "Enter first number"
read num1
echo "Enter second number"
read num2
sum=$((num1+num2))

echo "Sum of $num1 and $num2 is $sum"