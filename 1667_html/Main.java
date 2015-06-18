import java.util.InputMismatchException;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;

public class Main {

    public static final int CHAR_LIMIT = 80;
 
    public static void main(String[] args) {
        ArrayList<Integer> q;

        String line, text;

        try {
            Scanner scanner = new Scanner(System.in);

            text = "";
            line = scanner.nextLine();

            while (!line.equals("")) {
                text += line;
                line = scanner.nextLine();
            }

            System.out.println(text);

            // q = new ArrayList<Integer>();


            // for (int i = 0; i < n; i++) {
            //     m = scanner.nextInt();

            //     q.clear();

            //     for (int j = 0; j < m; j++) {
            //         q.add( scanner.nextInt() );
            //     }

            //     canteen(q);
            // }
        } 
        catch(InputMismatchException e) {
            e.printStackTrace();
        }
    }

}