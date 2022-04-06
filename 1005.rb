n1 = gets.chomp.to_f
n2 = gets.chomp.to_f

media = (((n1 * 3.5) + (n2 * 7.5)) / 11)

puts "MEDIA = %0.05f\n" % media.round(5)