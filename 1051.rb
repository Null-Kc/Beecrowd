x = gets.chomp

nums = x.split
a = nums[0].to_i
b = nums[1].to_i
c = nums[1].to_i

  if (a >= b && a >= c){

		maior = a;
		meio = b;
		menor = c;

	}

	if (b >= a && b >= c){

		maior = b;
		meio = a;
		menor = c;

	}

	else{

		maior = c;
		meio = a;
		menor = b;

	}

	if (maior >= meio + menor){

		printf("NAO FORMA TRIANGULO\n");


	}
	else{

	if ( maior*maior == meio*meio + menor*menor){

		printf("TRIANGULO RETANGULO\n");

	}

	if (maior*maior > meio*meio + menor*menor){

		printf("TRIANGULO OBTUSANGULO\n");

	}

	if (maior* maior < meio*meio + menor*menor){

		printf("TRIANGULO ACUTANGULO\n");

	}

	if (maior == meio && maior == menor){

		printf("TRIANGULO EQUILATERO\n");

	}

	if (maior == meio && maior != menor && menor != meio){

		printf("TRIANGULO ISOSCELES\n");

	}

	if (meio == menor && maior != meio && maior != menor){

		printf("TRIANGULO ISOSCELES\n");

	}

	if (maior == menor && menor != meio && maior != meio){

		printf("TRIANGULO ISOSCELES\n");

	}

end