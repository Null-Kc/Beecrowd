senha = 1 
 
while senha != 2002
    senha = gets.chomp.to_i
    
    if senha != 2002
        puts "Senha Invalida"
    end    
    if senha == 2002
        puts "Acesso Permitido"
        break
    end
end