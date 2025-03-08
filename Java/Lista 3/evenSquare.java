import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        for (int n = 1; n < x+1; n++){
            if(n%2 == 0) {
                System.out.println(n + "^2 = " + n*n);
            }
        }
    }
}