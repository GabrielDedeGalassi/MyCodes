import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int lista[] = new int[10];
        for (int n = 0; n < lista.length; n++){
            lista[n] = x;
            System.out.println("N["+ n + "] = " + x);
            x *= 2;
        }
    }
}