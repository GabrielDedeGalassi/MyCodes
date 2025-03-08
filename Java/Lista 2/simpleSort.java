import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int Y = sc.nextInt();
        int Z = sc.nextInt();
        int A = X;
        int B = Y;
        int C = Z;
        int W = 0;
        if(X > Y) {
            W = X;
            X = Y;
            Y = W;
        }
        if(X > Z) {
            W = X;
            X = Z;
            Z = W;
        }
        if(Y > Z) {
            W = Y;
            Y = Z;
            Z = W;
        }
        System.out.println(X);
        System.out.println(Y);
        System.out.println(Z);
        System.out.println("");
        System.out.println(A);
        System.out.println(B);
        System.out.println(C);
    }
}