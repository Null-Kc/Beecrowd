i = 0
num = gets.chomp.to_i

while i < num
  i = i + 1
  raios =  gets.chomp
  raios = raios.split
  raio1 = raios[0].to_i
  raio2 = raios[1].to_i
  
  puts raio1 + raio2
end