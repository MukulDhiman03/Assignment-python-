def check(num):
    if num in range(0,9):
        print("{} is in range".format(num))
    else:
        print("{} is not in the range".format(num))

n = int(input("Enter no"))
check(n)