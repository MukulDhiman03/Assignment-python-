def isPrime(n):
    if n>=2:
        for i in range(2,n,1):
            if n%i==0:
                return False
    else:
        return False
    return True

arr = [ ]
limit = int(input("Enter the limit of list: "))
for i in range(2,limit+1):
    if isPrime(i):
        arr.append((i,"prime"))
    else:
        arr.append((i,"non prime"))
print(arr)