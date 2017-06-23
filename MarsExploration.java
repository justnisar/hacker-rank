import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static int compareString(String str){
        if(str.equals("SOS"))
            return 0;
        
        int sum = 0;
        if(str.charAt(0) != 'S')
            sum++;
        if(str.charAt(1) != 'O')
            sum++;
        if(str.charAt(2) != 'S')
            sum++;
        
        return sum;
        
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int sum = 0;
        for(int i = 0 ; i < S.length() ; i += 3){
            String str = S.substring(i, i + 3);
            sum += compareString(str);
        }
        
        System.out.println(sum);
        
    }
}

