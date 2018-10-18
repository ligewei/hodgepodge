#!/usr/bin/env python
# encoding=utf-8

import timeit

print 'Performance Test for Data Structure in Python'

def list_append():
    l = []
    for i in range(100):
        l.append(i)

def list_range(count):
    l = list(range(count))

list_time = timeit.Timer("list_append()", "from __main__ import list_append")
print list_time.timeit()

list_time = timeit.Timer("list_range(100)", "from __main__ import list_range")
print list_time.timeit()

list_time = timeit.Timer("list_range(1000)", "from __main__ import list_range")
print list_time.timeit()
