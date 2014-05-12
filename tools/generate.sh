#!/bin/bash

for desc in datasets/*.desc
do
    descfile=`basename $desc`
    descname=${desc/.desc/}
    short=${descfile/.desc/}
    cat $desc > tmp
    cat $desc | sed 's/jpg/dat/' >> tmp
    cat tmp | xargs tar cvjf ${descname}.tar.bz2 --transform "s/images/${short}/"
    rm tmp
done