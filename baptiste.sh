#!/bin/bash

counter=1045

for counter in {1045..1088}
do
    resolution=`identify -format "%[fx:w]x%[fx:h]" wip/image$counter.jpg`
    echo "Samsung Galaxy S4" > wip/image$counter.dat
    echo "$resolution: 24 JPG" >> wip/image$counter.dat
done