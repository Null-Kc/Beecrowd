teste = gets.chomp.to_i

i = 0

until teste == i do
    i += 1
    num = gets.chomp.to_i

    if num < 0
        if num % 2 == 0
            puts "EVEN NEGATIVE"
        else
            puts "ODD NEGATIVE"
        end

    elsif num > 0
        if num % 2 == 0
            puts "EVEN NEGATIVE"
        else
            puts "ODD NEGATIVE"
        end

    elsif num == 0
        puts "NULL"
    end
end