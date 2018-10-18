var = 'hello, world!'
str = 'good boy'

# len
print len(var)

# +
print var + str

# *
print var * 3

# in
inornot = 'hello' in var
print inornot

# [n]
print var[0]
print var[1]

# [m:n]
# len([m:n]) == n-m
# [start:finish:countBy]
# [::-1]
print var[0:3]
print len(var[0:3])
print var[0:5:2]
print var[::-1]

# string is read only
print str
print str[:1]
print str[2:]
print str[:1] + 'a' + str[2:]
print str

# replace
# string is read only
print '# replace'
print str
print str.replace('o', 'a')
print str

# find
print var.find('e')

# split
print var.split()

# dir(str)







