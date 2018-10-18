#!/usr/bin/env python
# encoding=utf-8

from IPy import IP

ip = IP('192.168.2.1')

print ip.iptype()
print ip.int()
print ip.strHex()
print ip.strBin()
print ip
