
def fun_list(list1):
    l = [ ]
    for i in list1:
        if i not in l:
            l.append(i)
    return l

list = [10 ,5, 2, 3 ,4,1,9,10,5]
print(fun_list(list))