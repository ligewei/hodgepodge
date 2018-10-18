def sum(a, b):
    sum = 0
    for i in range(a, b):
        sum += i
    return sum

def main():
    print sum(1, 1)
    print sum(1, 2)

main()
