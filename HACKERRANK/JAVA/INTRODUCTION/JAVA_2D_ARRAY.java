import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        for (int i = 0; i < 6; i++){
            for (int j=0; j < 6; j++){
                arr[i][j] = in.nextInt();
            }
        }
        
        int len = 6;
        int sum = 0;
        
        int max_sum = Integer.MIN_VALUE;
        
        int top_left;
        int top_mid;
        int top_right;
        // int mid_left;
        int mid_mid;
        //int mid_right;
        int bot_left;
        int bot_mid;
        int bot_right;
        
        for (int i = 0; i < 6 - 2; i++) {
            for (int j = 0; j < 6 - 2; j++) {

                top_left = arr[i][j];
                top_mid = arr[i][j + 1];
                top_right = arr[i][j + 2];
                // mid_left = arr[i + 1][j];
                mid_mid = arr[i + 1][j + 1];
                // mid_right = arr[i + 1][j + 2];
                bot_left = arr[i + 2][j];
                bot_mid = arr[i + 2][j + 1];
                bot_right = arr[i + 2][j + 2];
                
                sum = top_left + top_mid + top_right + mid_mid + bot_left + bot_mid + bot_right;
                
                //System.out.println("i: " + i + " j: " + j + " sum: " + sum);
                //System.out.println(Integer.toString(top_left) + 
                //                   Integer.toString(top_mid) + 
                //                   Integer.toString(top_right) + "\r\n" +
                //                   Integer.toString(mid_mid) + "\r\n" +
                //                   Integer.toString(bot_left) + 
                //                   Integer.toString(bot_mid) + 
                //                   Integer.toString(bot_right)
                //);
                
                if (sum > max_sum) {
                    max_sum = sum;
                }
            }
        }
        
        System.out.println(max_sum);
        
    }
}
