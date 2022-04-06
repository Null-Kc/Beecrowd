import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner leitor = new Scanner(System.in);
    double salariof;
    float salario = leitor.nextFloat();

    if(salario <= 2000.00){
       System.out.println("Isento");
    }

    else if (salario >= 2000.01 && salario <= 3000.00) {
      salariof = ((salario - 2000.00)*0.08);
      System.out.println(String.format("R$ %.2f", salariof));
    }

    else if (salario >= 3000.01 && salario <= 4500.00) {
      salariof = ((salario - 3000.00)*0.18 + 1000.00*0.08);
      System.out.println(String.format("R$ %.2f", salariof));
    }

    else if (salario >= 4500.01) {
      salariof = ((salario - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08);
      System.out.println(String.format("R$ %.2f", salariof));
    }
  }
}
