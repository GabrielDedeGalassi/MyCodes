import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        float lista[] = new float[x];
        int fora = 0;
        int dentro = 0;
        for (int n = 0; n < lista.length; n++){
            lista[n] = sc.nextFloat();
            if(lista[n] >= 10 && lista[n] <= 20) {
                dentro++;
            } else {
                fora++;
            }
        }
        System.out.println(dentro + " in");
        System.out.println(fora + " out");
    }
}