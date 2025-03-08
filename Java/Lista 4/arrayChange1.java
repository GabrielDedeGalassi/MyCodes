import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int lista[] = new int [20];
        for (int n = 0; n < lista.length; n++){
            lista[n] = sc.nextInt();
        }
        for (int m = 0; m < lista.length; m++){
            System.out.println("N[" + m + "] = " + lista[19-m]);
        }
    }
}