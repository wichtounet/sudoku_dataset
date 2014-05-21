#!/bin/bash
convert $1.jpg -rotate 90 $1.jpg
cp $1.jpg $1.original.jpg
convert $1.jpg -resize 960x1280 $1.jpg