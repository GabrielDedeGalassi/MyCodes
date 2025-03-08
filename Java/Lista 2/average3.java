import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        float X = sc.nextFloat();
        float Y = sc.nextFloat();
        float W = sc.nextFloat();
        float Z = sc.nextFloat();
        float Media = (2*X + 3*Y + 4*W + Z)/10;
        System.out.printf("Media: %.1f\n", Media);
        if(Media < 5) {
            System.out.println("Aluno reprovado.");
        } else if(Media >= 5 && Media < 7) {
            System.out.println("Aluno em exame.");
            float Nova = sc.nextFloat();
            System.out.printf("Nota do exame: %.1f\n", Nova);
            float NMedia = (Nova+Media)/2;
            if(NMedia < 5) {
                System.out.println("Aluno reprovado.");
            } else if(NMedia >= 5) {
                System.out.println("Aluno aprovado.");
            System.out.printf("Media final: %.1f\n", NMedia);
            }
        } else if(Media >= 7) {
            System.out.println("Aluno aprovado.");
        }
    }
}