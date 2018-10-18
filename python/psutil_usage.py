#!/usr/bin/env python
# encoding=utf-8

import psutil

print psutil.cpu_times()
print psutil.cpu_count()

print psutil.virtual_memory()

print psutil.disk_usage('/')

print psutil.net_io_counters()
