#!/bin/bash

counter=1045

for counter in {1045..1088}
do
    cp wip/image$counter.jpg wip/image$counter.original.jpg
    convert wip/image$counter.jpg -resize 960x1280 wip/image$counter.jpg
done