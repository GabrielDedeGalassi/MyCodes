import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        char Op = sc.next().charAt(0);
        float y = 0;
        int z = 1;
        int q = 0;
        float lista[][] = new float[12][12];
        for (int n = 0; n < 12; n++){
            for (int m = 0; m < 12; m++){
                lista[n][m] = sc.nextFloat();
                if (z <= m) {
                    y += lista[n][m];
                    q += 1;
                }
            }
            z +=1;
        }
        if (Op == 'S') {
            System.out.printf("%.1f\n", y);
        } else if (Op == 'M') {
            System.out.printf("%.1f\n", y/q);
        }
    }
}