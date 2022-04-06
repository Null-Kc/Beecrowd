import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int n1 = leitor.nextInt();
        int n2 = leitor.nextInt();
        int prod = n1 * n2;
        System.out.println("PROD = " + prod);
    }
 
}