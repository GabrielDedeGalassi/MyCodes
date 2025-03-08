import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        for (int n = 1; n <= 10000; n++){
            if(n%x == 2) {
                System.out.println(n);
            }
        }
    }
}