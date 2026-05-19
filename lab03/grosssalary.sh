#!/bin/bash
echo enter the basics
read basics
echo enter TA
read ta
gs=$( echo "$basics + $ta +(0.1*$basics)" | bc -l)
echo "$gs"
