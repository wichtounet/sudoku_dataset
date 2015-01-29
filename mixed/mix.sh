#!/bin/bash

rm -rf test
rm -rf train

mkdir test
mkdir train

ls -l *.jpg | awk '{ print $NF}' | sort -R > files_jpg

cp files_jpg files_dat
sed -i 's/jpg/dat/' files_dat

head -n 40 files_jpg | xargs -I {} cp {} test
head -n 40 files_dat | xargs -I {} cp {} test
tail -n 160 files_jpg | xargs -I {} cp {} train
tail -n 160 files_dat | xargs -I {} cp {} train

rm files_jpg
rm files_dat
