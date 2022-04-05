i = 0
cont = gets.chomp.to_i

while i < cont
    num = gets.chomp.to_i
    div = 0
    x=1
    
    while x <= num
        if num % x == 0
            div = div + 1
        end
        x = x + 1
    end
    
    if div > 2
        puts "#{num} nao eh primo"
    else 
        puts "#{num} eh primo"
    end
    i = i + 1
end