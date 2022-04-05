cont = int(input())

for i in range(0,cont):
    num = int(input())
    div = 0
    x=1

    while x <= num:
        if num % x == 0:
            div = div + 1
        x = x + 1
    
    if div > 2:
        print('{} nao eh primo'.format(num))
    
    else:
        print('{} eh primo'.format(num))