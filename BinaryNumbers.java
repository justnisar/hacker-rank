import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        int max = Integer.MIN_VALUE;
        int count = 0;
        while(n != 0){
            int rem = n % 2;
            n = n/2;
            if(rem == 0){
                if(count > max)
                    max = count;
                count = 0;
            }
            else{
                ++count;
            }
        }
        
        if(count > max)
            max = count;
        
        if(max == Integer.MIN_VALUE)
            System.out.println("0");
        else
            System.out.println(max);
        
    }
}

