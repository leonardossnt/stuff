import java.util.InputMismatchException;
import java.util.ArrayList;
import java.util.Queue;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Collections;

public class Main {
 
    public static void main(String[] args) {
        int n, m;
        Queue q;

        try {
            Scanner scanner = new Scanner(System.in);

            n = scanner.nextInt();

            q = new LinkedList<Integer>();

            while (!n.equals(0)) {
                for (int i = 0; i < n; i++)
                    q.add(i+1);

                discard(q);

                q.clear();

                n = scanner.nextInt();                
            }
        } 
        catch(InputMismatchException e) {
            e.printStackTrace();
        }
    }

    public static void discard(LinkedList<Integer> q) {
        int i, c;

        c = q.poll();

        System.out.print("Discarded cards: " + c);

        while(q.size() > 1) {
            c = q.poll();
            q.add(c);

            c = q.poll();
            System.out.print(", " + c);
        }

        System.out.print("\n");
        System.out.println("Remaining card: " + q.poll());
    }
}