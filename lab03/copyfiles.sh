#!/bin/bash
echo enter the extension
read ext
echo enter the folder name
read folder
mkdir "$folder"
mv *."$ext" "$folder"
