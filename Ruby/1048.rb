salario = gets.chomp.to_f

if salario >= 0 and salario <= 400
	reaj = salario * 0.15
	novosal = salario + reaj
	perc = 15

elsif(salario >= 400.01 and salario <= 800.00)
  reaj = salario * 0.12
  novosal = salario + reaj
  perc = 12

elsif(salario >= 800.01 and salario <= 1200.00)
  reaj = salario * 0.1
  novosal = salario + reaj
  perc = 10

elsif(salario >= 1200.01 and salario <= 2000.00)
	reaj = salario * 0.07
	novosal = salario + reaj
	perc = 7

elsif(salario > 2000)
	reaj = salario * 0.04
	novosal = salario + reaj
	perc = 4

end

puts "Novo salario: %0.02f\n" % novosal.round(2)
puts "Reajuste ganho: %0.02f\n" % reaj.round(2)
puts "Em percentual: #{perc} %"