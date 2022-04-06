import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args){
    double salario, reaj, novosal, val, perc;

    Scanner leitor = new Scanner(System.in);
    
    salario = leitor.nextDouble();
    
    if (salario >= 0 && salario <= 400.00) {
      val = 0.15;
    }
    else if (salario >= 400.01 && salario <= 800.00) {
      val = 0.12;
    }
    else if (salario >= 800.01 && salario <= 1200.00) {
      val = 0.1;
    }
    else if (salario >= 1200.01 && salario <= 2000.00) {
      val = 0.07;
    }
    else {
      val = 0.04;
    }

    reaj = salario * val;
    novosal = salario + reaj;
    perc = val * 100;
    int percf = (int) perc;

    System.out.println(String.format("Novo salario: %.2f", novosal));
    System.out.println(String.format("Reajuste ganho: %.2f", reaj));
    System.out.println("Em percentual: " + percf + " %");
  }
}