import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        List<Integer> a = new ArrayList<Integer>();
        while (in.hasNext()) {
            a.add(in.nextInt());
        }
        
        Collections.reverse(a);
        
        for (int i = 0; i < a.size(); i++) {
            System.out.print(a.get(i));
            System.out.print(" ");
        }
        
    }
}