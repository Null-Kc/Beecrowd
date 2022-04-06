x = gets.chomp

nums = x.split
n1 = nums[0].to_f
n2 = nums[1].to_f

media = (n1 / n2)

puts "%0.02f\n" % media.round(2)