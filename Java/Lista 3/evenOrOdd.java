import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int lista[] = new int[x];
        for (int n = 0; n < x; n++){
            lista[n] = sc.nextInt();
            if(lista[n] == 0) {
                System.out.println("NULL");
            } else if(lista[n]%2 == 0 && lista[n] != 0){
                System.out.print("EVEN");
            } else if(lista[n]%2 != 0 && lista[n] != 0){
                System.out.print("ODD");
            }
            if(lista[n] < 0 && lista[n] != 0) {
                System.out.println(" NEGATIVE");
            } else if(lista[n] > 0 && lista[n] != 0){
                System.out.println(" POSITIVE");
            }
        }
    }
}