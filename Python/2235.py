n1, n2, n3 = input().split()
n1 = int(n1)
n2 = int(n2)
n3 = int(n3)
if((n1-n2 == 0) or (n1-n3 == 0) or (n2-n3 == 0)):
    print('S')
else:
    if((n1+n2-n3 == 0) or (n2-n1+n3 == 0) or (n3-n1+n2 == 0)):
        print('S')
    elif((n1-n2-n3 == 0) or (n2-n1-n3 == 0) or (n3-n1-n2 == 0)):
        print('S')
    else:
        print('N')