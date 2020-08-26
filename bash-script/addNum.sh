#!/bin/bash 

echo -n "Enter first number: "
read num1
echo -n "Enter second number: "
read num2

#add

sum=`expr $num1 + $num2` 
echo "Sum of two value is: $sum" 