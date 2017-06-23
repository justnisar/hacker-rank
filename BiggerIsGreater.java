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
        //System.out.println(t);
        int i = 0;
        while(t-- > 0){
            String s = scan.next();
            //System.out.println(s);
            if( s.length() == 1){
                System.out.println("no answer");
                continue;
            }
            
            int length = s.length();
          //  System.out.println(length);
            int min = length - 1;
            for(i = length - 2 ; i >= 0 ; i--){
                   if( s.charAt(i) >= s.charAt(min) ){
                        min = i;                       
                   }   
                   else{
                       break;
                   }
            }
            
            if(min == 0){
                System.out.println("no answer");
                continue;
            }
            
            int pivot = i;
            //System.out.println(pivot);
            
            String left = s.substring(0,pivot+1);
            String right = s.substring(pivot+1);
            
            char[] left_arr = left.toCharArray();
            char[] right_arr = right.toCharArray();
            
            length = right_arr.length;
            for(i = length - 1 ; i >= 0 ; i--){
                if(right_arr[i] > left_arr[pivot])
                    break;
            }
            
            int breakpoint = i;
            
            char temp = right_arr[breakpoint];
            right_arr[breakpoint] = left_arr[pivot];
            left_arr[pivot] = temp;
            
            Arrays.sort(right_arr);
            
            System.out.println(new String(left_arr) + new String(right_arr));
                
        }
        
    }
}
