import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int Y = sc.nextInt();
        if (Y > X) {
            if (Y%X == 0) {
                System.out.println("Sao Multiplos");
            } else {
                 System.out.println("Nao sao Multiplos");
            }
        } else if(Y < X) {
            if (X%Y == 0) {
                System.out.println("Sao Multiplos");
            } else {
                System.out.println("Nao sao Multiplos");
            }
        }
    }
}