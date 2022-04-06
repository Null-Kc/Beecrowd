v1,v2,v3,v4 = map(int,input().split())

if v2 > v3 and v4 > v1 and (v3 + v4) > (v1 + v2) and v3 > 0 and v4 > 0 and v1 % 2 ==0:
	print("Valores aceitos")

else:
	print("Valores nao aceitos")