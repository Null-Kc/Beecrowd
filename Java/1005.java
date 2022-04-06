import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        float n1 = leitor.nextFloat();
        float n2 = leitor.nextFloat();
        double media = (n1 * 3.5 + n2 * 7.5) / 11.0;
        System.out.println(String.format("MEDIA = %.5f", media));
    }
}