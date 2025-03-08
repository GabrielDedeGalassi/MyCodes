import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        float lista[] = new float[6];
        int posi = 0;
        float posimedia = 0;
        for (int i = 0; i < lista.length; i++){
            lista[i] = sc.nextFloat();
            if(lista[i] > 0) {
                posi++;
                posimedia += lista[i];
            }
        }
        float media = (posimedia/posi);
        System.out.println(posi + " valores positivos");
        System.out.printf("%.1f\n", media);
    }
}