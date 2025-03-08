import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        float X = age/365f;
        int ano = (int)X;
        float Y = (age%365)/30f;
        int mes = (int)Y;
        float Z = (age%365)%30f;
        int dia = (int)Z;
        System.out.println(ano + " ano(s)");
        System.out.println(mes + " mes(es)");
        System.out.println(dia + " dia(s)");
    }
}