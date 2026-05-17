#!/bin/bash
echo enter folder name
read folder
echo enter the pattern
read pattern
grep -rl "$pattern" "$folder"
