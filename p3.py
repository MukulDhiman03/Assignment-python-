def countCase(str1):
    countUp=0
    countLw=0
    for i in str1:
        if(i.isupper()):
            countUp=countUp+1
        if(i.islower()):
            countLw= countLw+1
    print("No of uperCase letter is: ",countUp)
    print("No of lowerCase letter is: ",countLw)





str = input("Enter string: ")
countCase(str)
