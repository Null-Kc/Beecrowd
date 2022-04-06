num = gets.chomp.to_f

if num > 75 and num <= 100
  puts "Intervalo (75,100]"

elsif num > 50 and num <= 75
  puts "Intervalo (50,75]"

elsif num > 25 and num <= 50
  puts "Intervalo (25,50]"

elsif num >= 0 and num <= 25
  puts "Intervalo [0,25]"

else 
  puts "Fora de intervalo"

end
