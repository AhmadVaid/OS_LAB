#!/bin/bash
echo enter the number
read num
flag=0
for ((i=2;i<num;i++));
do
if ((num%i == 0 ))
then
flag=1
break
fi
done
if (( flag == 1 ))
then
echo this number is not prime
else
echo this is a prime number
fi
