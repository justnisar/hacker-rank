import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0){
            String s = scan.next();
            int length = s.length();
            String left = "";
            String right = "";
            for(int i = 0 ; i < length ; i++){
                if(i % 2 == 0){
                    left += s.charAt(i);
                }
                else{
                    right += s.charAt(i);                    
                }
                
            }
        System.out.println(left + " " + right);
        }
    }
}
