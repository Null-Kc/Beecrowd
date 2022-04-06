salario = gets.chomp.to_f

if(salario > 0 and salario <= 2000)
  puts "Isento"

elsif salario > 2000 and salario <= 3000
  resto = salario - 2000
  resultado = resto * 0.08
  puts "R$ %0.02f" % resultado.round(2)

elsif salario > 3000 and salario < 4500
  resto = salario - 3000
  resultado = (resto * 0.18) + (1000 * 0.08)
  puts "R$ %0.02f" % resultado.round(2)

else
  resto = salario - 4500
  resultado = (resto * 0.28) + (1500 * 0.18) + (1000 * 0.08)
  puts "R$ %0.02f" % resultado.round(2)

end