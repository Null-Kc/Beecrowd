import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner leitor = new Scanner(System.in);

    int num = leitor.nextInt();

    for(int i = 1; i <= num; i++){
      if(num % i == 0){
        System.out.println(i);
      }
        	
    }
  }
}