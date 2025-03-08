import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        char Op = sc.next().charAt(0);
        double y = 0;
        int q = 0;
        double lista[][] = new double[12][12];
        for (int n = 0; n < lista.length; n++){
            for (int m = 0; m < lista[n].length; m++){
                lista[n][m] = sc.nextDouble();
            }
        }
        for (int n = 0; n < lista.length; n++){
            for (int m = 0; m < lista[n].length; m++){
                if (m > n && m < lista.length-n-1){
                    y += lista[n][m];
                    q+= 1;
                }
            }
        }
        if (Op == 'S') {
            System.out.printf("%.1f\n", y);
        } else if (Op == 'M') {
            System.out.printf("%.1f\n", y/q);
        }
    }
}