x = gets.chomp

nums = x.split
v1 = nums[0].to_i
v2 = nums[1].to_i
v3 = nums[2].to_i
v4 = nums[3].to_i

if v2 > v3 and v4 > v1 and (v3 + v4) > (v1 + v2) and v3 > 0 and v4 > 0 and v1 % 2 ==0
  puts "Valores aceitos"

else
  puts "Valores nao aceitos"

end