import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    int a, b, soma;

    Scanner scanner = new Scanner(System.in);
    a = scanner.nextInt();
    b = scanner.nextInt();
    scanner.close();

    soma = a + b;
    System.out.printf("SOMA = %d\n", soma);
  }
}
