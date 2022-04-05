i = 0
cont = gets.chomp.to_i

while i < cont
    num = gets.chomp.to_i
    j = 1
    s = 0
    while j < num
        if num % j == 0
            s = s + j
        end
        j = j + 1
    end
    
    if s == num
        puts "#{num} eh perfeito"
    else 
        puts "#{num} nao eh perfeito"
    end
    i = i + 1
end