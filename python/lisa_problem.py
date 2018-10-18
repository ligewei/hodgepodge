#/usr/bin/env python
# encoding=utf-8

num = [1,3,5,7,9,11,13,15]

# (2i+1) + (2j+1) + (2k+1) = 2(i+j+k+1)+1

flag = False

for i in num:
	for j in num:
		for k in num:
			if i + j + k == 30:
				flag = True
				print "Solved it!" 
				print i, j, k
				break

if not flag:
	print "No Answer!"
