import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner leitor = new Scanner(System.in);
    
    int raio1, raio2;

    int num = leitor.nextInt();

    for(int i = 1; i <= num; i++){
          raio1 = leitor.nextInt();
        	raio2 = leitor.nextInt();
        	System.out.println(raio1 + raio2);
    }
  }
}
