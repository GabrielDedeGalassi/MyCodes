import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int lista[] = new int[x];
        int p = 0;
        int me = 1000000;
        for (int n = 0; n < lista.length; n++){
            lista[n] = sc.nextInt();
            if (lista[n] < me){
                me = lista[n];
                p = n;
            }
        }
        System.out.println("Menor valor: " + me);
        System.out.println("Posicao: " + p);
    }
}