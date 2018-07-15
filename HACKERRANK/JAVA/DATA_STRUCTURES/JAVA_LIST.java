import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		
        in.nextLine();
        Vector<Integer> vec = new Vector<Integer>();
        for (int i = 0; i < n; i++) {
            int x = in.nextInt();
            vec.add(x);
        }
        
        in.nextLine();
        int q = in.nextInt();
        in.nextLine();
        
        while (in.hasNext()) {
            String query = in.nextLine();
            if (query.equals("Insert")) {
                int pos = in.nextInt();
                int x = in.nextInt();
                vec.insertElementAt(x, pos);
                // in.nextLine();
            }
            else if (query.equals("Delete")) {
                int pos = in.nextInt();
                vec.remove(pos);
                // in.nextLine();
            }
        }
        
        String output = "";
        for (int x : vec) {
            output = output + Integer.toString(x) + " ";
        }
        output = output.substring(0, output.length() - 1);
        System.out.println(output);
        
        
    }
}