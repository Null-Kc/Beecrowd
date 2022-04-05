num = int(input())

for i in range(num):
    x = input()

    raio1, raio2 = map(int,x.split())
    print(raio1 + raio2)