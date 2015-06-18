import java.util.InputMismatchException;
import java.io.IOException;
import java.util.Scanner;
import java.lang.Math;

public class Main {
 
    public static void main(String[] args) throws IOException {
        int a, b, c, n, m;

        try {
            Scanner scanner = new Scanner(System.in);

            a = scanner.nextInt();
            b = scanner.nextInt();
            c = scanner.nextInt();

            maior2(a, b, c);

        } 
        catch(InputMismatchException e) {
            e.printStackTrace();
        }
    }

    public static void maior(int a, int b, int c) {
        int maior;

        if (maiorAB(a, b) == a) {
            if (maiorAB(a, c) == a) {
                maior = a;
            } else {
                maior = c;
            }
        } else {
            if (maiorAB(b, c) == b) {
                maior = b;
            } else {
                maior = c;
            }
        }

        System.out.println(maior + " eh o maior");
    }

    public static void maior2(int a, int b, int c) {
        int maior = maiorAB(a, b);
        maior = maiorAB(maior, c);
        System.out.println(maior + " eh o maior");
    }

    public static int maiorAB(int a, int b) {
        return ((a + b + Math.abs(a-b))/2);
    }
}