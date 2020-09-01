def check_pal(str1):
    str2 = str1[::-1]
    if(str2 == str1):
        print("Entered string is palindrome")
    else:
        print("Entered string not Palindrome")

str = input("Enter string ")
check_pal(str)