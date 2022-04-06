x = gets.chomp

nums = x.split
n1 = nums[0].to_i
n2 = nums[1].to_i
n3 = nums[2].to_i

if (n1-n2 == 0) or (n1-n3 == 0) or (n2-n3 == 0)
  puts "S"

else
  if (n1+n2-n3 == 0) or (n2-n1+n3 == 0) or (n3-n1+n2 == 0)
    puts "S"
  
  elsif (n1-n2-n3 == 0) or (n2-n1-n3 == 0) or (n3-n1-n2 == 0)
    puts "S"
  
  else 
    puts "N"
  end
end