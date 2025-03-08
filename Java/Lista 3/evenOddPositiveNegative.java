import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        float lista[] = new float[5];
        int pos = 0;
        int neg = 0;
        int p = 0;
        int i = 0;
        for (int n = 0; n < lista.length; n++){
            lista[n] = sc.nextFloat();
            if(lista[n] > 0) {
                pos++;
            } else if (lista[n] < 0){
                neg++;
            }
            if(lista[n]%2 == 0){
                p++;
            } else if (lista[n]%2 != 0){
                i++;
            }
        }
        System.out.println(p + " valor(es) par(es)");
        System.out.println(i + " valor(es) impar(es)");
        System.out.println(pos + " valor(es) positivo(s)");
        System.out.println(neg + " valor(es) negativo(s)");
    }
}