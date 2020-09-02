def isPrime(n):
    if n>=2:
        for i in range(2,n,1):
            if n%i==0:
                return False
    else:
        return  False
    return True

dic = { }
limit = int(input("Enter the limit : "))
for i in range(2,limit+1):
    if isPrime(i):
        dic[i]="prime"
    else:
        dic[i]="non prime"
print(dic)
length = len(dic)
for i in range(length):
    if dic[i+2]=="non prime":
        del dic[i+2]
print(dic)