#!/usr/bin/env python
# encoding=utf-8

import os,sys,time,subprocess
import warnings,logging

logging.getLogger("scrapy.runtime").setLevel(logging.ERROR)

from scapy.all import traceroute

host = 'www.ligewei.com'
dport = 80

res,n = traceroute(host, dport, retry=-2)
res.graph(target='> res.svg')

time.sleep(1)

print '=====OK====='

