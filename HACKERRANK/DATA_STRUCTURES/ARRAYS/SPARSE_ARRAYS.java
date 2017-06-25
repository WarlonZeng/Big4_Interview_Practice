import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        
        List<String> a = new ArrayList<String>();
        
        // get list of strings
        for (int i = 0; i < n; i++) {
            a.add(in.nextLine());
        }
        
        int m = in.nextInt();
        in.nextLine();
        
        int count = 0;
        for (int i = 0; i < m; i++) {
            String s = in.nextLine();
            for (int j = 0; j < a.size(); j++) {
                if (a.get(j).equals(s)) {
                    count++;
                }
            }
            System.out.println(count);
            count = 0;
        }
        
    }
}