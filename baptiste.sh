#!/bin/bash

counter=1045

for file in baptiste/*
do
    cp $file wip/image$counter.jpg
    counter=$((counter+1))
done