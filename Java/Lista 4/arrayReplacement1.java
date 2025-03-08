import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int lista[] = new int[10];
        for (int n = 0; n < lista.length; n++){
            lista[n] = sc.nextInt();
            if (lista[n] < 1){
                lista[n] = 1;
            }
            System.out.println("X["+ n + "] = " + lista[n]);
        }
    }
}