import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        double raio,A;
        Scanner sc = new Scanner(System.in);
        raio = sc.nextDouble();
        A = 3.14159 * raio * raio;
        System.out.printf("A=%.4f\n",  A);
   }
}