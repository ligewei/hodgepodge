#!/usr/bin/env python
# encoding=utf-8

import dns.resolver

host = 'qq.com'
a_record = dns.resolver.query(host, 'A')
for h in a_record.response.answer:
    for ip in h.items:
        print ip.address

host = 'dl.stream.kg.qq.com'
a_record = dns.resolver.query(host, 'CNAME')
for h in a_record.response.answer:
    for ip in h.items:
        print ip.to_text()

host = 'baidu.com'
a_record = dns.resolver.query(host, 'NS')
for h in a_record.response.answer:
    for ip in h.items:
        print ip.to_text()
