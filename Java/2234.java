import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner leitor = new Scanner(System.in);
    
    float n1, n2, media;

    n1 = leitor.nextInt();
    n2 = leitor.nextInt();

    media = (n1 / n2);

    System.out.println(String.format("%.2f", media));
  }
}