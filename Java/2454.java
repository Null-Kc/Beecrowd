import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner leitor = new Scanner(System.in);
    
    float n1, n2, media;

    n1 = leitor.nextInt();
    n2 = leitor.nextInt();

    if (n1 == 0){
      System.out.println("C");
    }

    else if (n1 == 1 & n2 == 0){
      System.out.println("B");
    }
  
    else{
      System.out.println("A");
    }
  }
}