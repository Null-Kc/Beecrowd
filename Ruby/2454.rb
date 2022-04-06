x = gets.chomp

nums = x.split
n1 = nums[0].to_i
n2 = nums[1].to_i

if n1 == 0
  puts "C"
end

elsif n1 == 1 and n2 == 0
  puts "B"

end

else 
  puts "A"
end