#!/bin/bash


echo -n "Enter name of the file: "
read fileName
if [ -f $fileName ]
then
    echo "$fileName was last modified on $(stat -c %x $fileName)"
else
	echo "File not exist"
fi