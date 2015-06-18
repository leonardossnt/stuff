import java.util.InputMismatchException;
import java.io.IOException;
import java.util.Queue;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Collections;

public class Main {
 
    public static void main(String[] args) throws IOException {
        int n, m;
        Queue<Integer> q;

        try {
            Scanner scanner = new Scanner(System.in);

            n = scanner.nextInt();

            q = new LinkedList<Integer>();

            while (n != 0) {
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

    public static void discard(Queue<Integer> q) {
        int i, c;
        //Integer c;

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