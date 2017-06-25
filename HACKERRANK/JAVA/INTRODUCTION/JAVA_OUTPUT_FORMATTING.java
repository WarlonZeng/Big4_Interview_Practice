import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            System.out.println("================================");
            int count = 0;
            int spaces = 0;
            int length = 15;
            int digitLength = 3;
            int pad = 0;
            for (int i = 0; i < 3; i++){
                String s = in.next();
                int x = in.nextInt();
                
                count += s.length();
                
                String y = Integer.toString(x);
                
                pad = digitLength - y.length();
                for (int j = 0; j < pad; j++) {
                    y = "0" + y;
                }
                spaces = length - count;
                
                System.out.print(s);
                for (int k = 0; k < spaces; k++) {
                    System.out.print(" ");
                }
                System.out.print(y);
                System.out.println("");
                
                count = 0;
                spaces = 0;
            }
            System.out.println("================================");

    }
}
