f = open('name.txt')
for line in f:
    # del lr
    name = line.strip()
    print name.title()

f.close()
