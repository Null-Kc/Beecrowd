import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int cont = leitor.nextInt();
        int num, soma;
        for (int i = 0; i < cont; i++) {
        	soma = 0;
        	num = leitor.nextInt();
        	for (int j = 1; j < num; j++) {
        		if (num % j == 0) soma += j;
        	}
        	if (soma == num) System.out.println(num + " eh perfeito");
        	else System.out.println(num + " nao eh perfeito");
        }
    }
 
}