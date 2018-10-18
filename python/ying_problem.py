#/usr/bin/env python
# encoding=utf-8

# i = 3a + 2
# i = 7b + 3
# i = 11c + 4
# i <= 1000

for i in range(1000):
	if (i-2)%3==0 and (i-3)%7==0 and (i-4)%11==0:
		print i
