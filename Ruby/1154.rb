x = 100
i = 0
soma = 0

while x >= 0
    x = gets.chomp.to_f
    
    if x >= 0
        i = i + 1
        soma = soma + x
    end
        
    media = soma / i
    
    
end

puts "%0.02f\n" % media.round(2)