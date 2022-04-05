import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args){
    int teste, i, num;
    Scanner sc = new Scanner(System.in);
    teste = sc.nextInt();
    
    for( i = 1; i <= teste; i++){
      num = sc.nextInt();
      if(num == 0){
        System.out.printf("NULL");
      }
      else if(num % 2 == 0){
        if(num > 0){
        System.out.printf("EVEN POSITIVE");
        }
        else{
          System.out.printf("EVEN NEGATIVE");
        }
      }
      else{
        if(num > 0){
          System.out.printf("ODD POSITIVE");
        }else{
          System.out.printf("ODD NEGATIVE");
        }
      }
    }        
  }
 
}