#!/bin/bash

result=0
i="y"

while [ $i = "y" ]
do
    read -p "Enter First no: " n1
    read -p "Enter Second no: " n2

    echo "1.Addition"
    echo "2.Subtraction"
    echo "3.Multiplication"
    echo "4.Division"
    read -p  "Enter your choice: " ch 
    case $ch in
        1)result=`expr $n1 + $n2`
            echo $n1" + "$n2" = "$result;;
        2)result=`expr $n1 - $n2`
            echo $n1" - "$n2" = "$result;;
        3)result=`expr $n1 \* $n2`
            echo $n1" * "$n2" = "$result;;
        4)result=`expr $n1 / $n2`
            echo $n1" / "$n2" = "$result;;
        *)echo "Invalid choice";;
    esac
    echo "Do u want to continue ?"
    read i
    if [ $i != "y" ]
    then
        exit
    fi
done