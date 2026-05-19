#!/bin/bash
n=1
while read line
do
if (( n%2 == 0 ))
then
echo "$line" >> evenfile
else
echo "$line" >> oddfile
fi
((n++))
done < "$1"
