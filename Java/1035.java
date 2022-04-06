import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner leitor = new Scanner(System.in);
    
    float v1, v2, v3, v4;

    v1 = leitor.nextInt();
    v2 = leitor.nextInt();
    v3 = leitor.nextInt();
    v4 = leitor.nextInt();

    if((v2 > v3) && (v4 > v1) && (v3 + v4 > v1 + v2) && v3 > 0 && (v1 % 2 == 0)) {
      System.out.println("Valores aceitos");
    }
    else {
      System.out.println("Valores nao aceitos");
    } 
  }
}