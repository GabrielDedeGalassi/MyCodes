import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        float lista[] = new float[100];
        for (int n = 0; n < lista.length; n++){
            lista[n] = sc.nextFloat();
            if (lista[n] <= 10){
                System.out.print("A[");
                System.out.print(n);
                System.out.printf("] = %.1f\n", lista[n]);
            }
        }
    }
}