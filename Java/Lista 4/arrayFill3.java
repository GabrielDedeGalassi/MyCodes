import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        double x = sc.nextDouble();
        double lista[] = new double[100];
        for (int n = 0; n < lista.length; n++){
            lista[n] = x;
            System.out.print("N[");
            System.out.print(n);
            System.out.printf("] = %.4f\n", lista[n]);
            x /= 2;
        }
    }
}