salario = float(input())

if(salario >= 0 and salario <= 400):
	reaj = salario * 0.15
	novosal = salario + reaj
	perc = 15

elif(salario >= 400.01 and salario <= 800.00):
  reaj = salario * 0.12
  novosal = salario + reaj
  perc = 12

elif(salario >= 800.01 and salario <= 1200.00):
  reaj = salario * 0.1
  novosal = salario + reaj
  perc = 10

elif(salario >= 1200.01 and salario <= 2000.00):
	reaj = salario * 0.07
	novosal = salario + reaj
	perc = 7

elif(salario > 2000):
	reaj = salario * 0.04
	novosal = salario + reaj
	perc = 4

print(f"Novo salario: {novosal:.2f}")
print(f"Reajuste ganho: {reaj:.2f}")
print(f"Em percentual: {perc} %")