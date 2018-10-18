#!/bin/sh
date=$1
echo $date

year=${date:0:4}
month=${date:4:2}
day=${date:6:2}

echo $year $month $day
(cal $month $year | grep -q "$day" && echo OK || { echo error; exit 1; }) 2>/dev/null

