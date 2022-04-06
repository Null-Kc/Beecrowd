import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner leitor = new Scanner(System.in);
    
    float n1, n2, n3;
    
    n1 = leitor.nextInt();
    n2 = leitor.nextInt();
    n3 = leitor.nextInt();
    
    if ((n1-n2 == 0) || (n1-n3 == 0) || (n2-n3 == 0)) {
      System.out.println("S");
    }
    else {
      if ((n1+n2-n3 == 0) || (n2-n1+n3 == 0) || (n3-n1+n2 == 0)) {
        System.out.println("S");
      }
      else if ((n1-n2-n3 == 0) || (n2-n1-n3 == 0) || (n3-n1-n2 == 0)) {
        System.out.println("S");
      }
      else {
        System.out.println("N");
      }
    } 
  }
}