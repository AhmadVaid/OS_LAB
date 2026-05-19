#!/bin/bash
echo enter the number
read num
sum=1
for ((i=num;i>1;i--));
do
((sum=sum*i))
done
echo "$sum"
