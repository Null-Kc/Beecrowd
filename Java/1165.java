import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner leitor = new Scanner(System.in);
    int cont = leitor.nextInt();
    int num, div;
      
    for (int i = 0; i < cont; i++) {
      div = 0;
      num = leitor.nextInt();
        
      for (int j = 2; j < num; j++) {
        if (num % j == 0) div++;
      }
        
      if (div == 0){
        System.out.println(num + " eh primo");
      }
        
      else{
        System.out.println(num + " nao eh primo");
      }
    }    
  }
}