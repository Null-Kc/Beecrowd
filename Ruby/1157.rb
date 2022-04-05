i = 1
num = gets.chomp.to_i

while i >= num
    i = i + 1
    if num % i == 0:
      puts(i)
    end
end