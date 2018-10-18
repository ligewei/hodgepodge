#!/bin/sh

year=${1:0:4}
month=${1:4:2}

echo $1 $year $month

cal $month $year | xargs | awk '{print $NF}'
