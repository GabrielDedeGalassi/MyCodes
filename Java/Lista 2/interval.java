import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        float X = sc.nextFloat();
        if(0 <= X && X <= 25) {
            System.out.println("Intervalo [0,25]");
        } else if(25 < X && X <= 50) {
            System.out.println("Intervalo (25,50]");
        } else if(50 < X && X <= 75) {
            System.out.println("Intervalo (50,75]");
        } else if(75 < X && X <= 100) {
            System.out.println("Intervalo (75,100]");
        } else {
            System.out.println("Fora de intervalo");
        }
    }
}