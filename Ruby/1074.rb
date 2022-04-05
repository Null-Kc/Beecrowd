teste = gets.chomp.to_i

i = 0

while i < teste
    num = gets.chomp.to_i

    if num < 0
        if num % 2 == 0
            puts "EVEN NEGATIVE"
        else
            puts "ODD NEGATIVE"
        end

    elsif num > 0
        if num % 2 == 0
            puts "EVEN POSITIVE"
        else
            puts "ODD POSITIVE"
        end

    elsif num == 0
        puts "NULL"
    end
    
    i = i + 1
end