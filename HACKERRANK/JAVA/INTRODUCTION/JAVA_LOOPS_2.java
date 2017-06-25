import java.util.*;
import java.io.*;
import java.math.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int a;
        int b;
        int n;
        int ans; 
        for (int i = 0; i < t; i++){
            a = in.nextInt();
            b = in.nextInt();
            n = in.nextInt();
            ans = a;
            for (int j = 0; j < n; j++) {
                ans += Math.pow(2, j) * b;
                System.out.print(ans);
                System.out.print(" ");
            }
            System.out.println("");
        }
        
        in.close();
    }
}
