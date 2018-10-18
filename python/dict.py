# dict is key-value structure

# map in C++
# HashTable or HashMap in Java

# [] is for list, () is for tuple, {} is for dict

# key is read-only, value is writable

dict = {'reg':186, 'jim':185}
print dict

# [key]
print dict['reg']
print dict['jim']

# add
dict['tom'] = 184
print dict['tom']
print dict

# len
print len(dict)

# key in dict
inornot = 'reg' in dict
print inornot
inornot = 'boy' in dict
print inornot

# for key in dict
for key in dict:
    print key
    print dict[key]

# items, keys, values
print dict.items()
print dict.keys()
print dict.values()

# clear
print dict
dict.clear()
print dict

