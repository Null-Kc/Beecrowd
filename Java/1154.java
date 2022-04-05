import java.io.IOException;
import java.util.Scanner;

public class Main {
	
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int i = 0;
        double soma = 0; 
        double x = 0;
        
        while (x >= 0) {
            x = leitor.nextInt();
            if (x >= 0) { 
                i++;
                soma+=x;
            }
        }
        double media = soma / i;
        
        System.out.println(String.format("%.2f", media));
    }
	
}