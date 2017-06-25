import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        int max = 10;
        int ans;
        for (int i = 1; i <= max; i++) {
            ans = n * i;
            System.out.println(n + " x " + i + " = " + ans);
        }
        
    }
}
