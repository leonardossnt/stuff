import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        int n, m, p;
        //ArrayList<String> q;
        ArrayList<Integer> q;
        String[] strArray;

        try {
            //BufferedReader bufferRead = new BufferedReader(new InputStreamReader(System.in));
            //n = Integer.parseInt( bufferRead.readLine() );

            Scanner scanner = new Scanner(System.in);

            n = scanner.nextInt();

            for (int i = 0; i < n; i++) {
                
                //m = Integer.parseInt( bufferRead.readLine() );

                m = scanner.nextInt();

                //strArray = bufferRead.readLine().split(" ");

                q = new ArrayList<Integer>();

                for (int j = 0; j < m; j++) {
                    q.add( scanner.nextInt() );
                }

                //q = new ArrayList<String>( Arrays.asList(strArray) );

                canteen(q);
            }
        } 
        catch(Exception e) {
            e.printStackTrace();
        }
    }

    public static void canteen(ArrayList<Integer> q) {
        System.out.println( q.toString() );
    }
}