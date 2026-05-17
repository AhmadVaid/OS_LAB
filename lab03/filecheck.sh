#!/bin/bash
echo enter the file name
read fname
if [ -d "$fname" ]
then echo "$fname" is a directory
elif [ -f "$fname" ]
then echo "$fname" is a file
else echo "$fname" does not exist
fi
