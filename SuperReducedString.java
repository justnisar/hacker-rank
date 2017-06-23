import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static boolean hasRepititive(StringBuffer s){
        int length = s.length();
        for(int i = 0 ; i < length - 1 ; i++){
            if( s.charAt(i) == s.charAt(i+1))
                return true;
        }
        return false;
    }
    
    public static StringBuffer fun(StringBuffer s){
        if( hasRepititive(s) == false )
            return s;
        else{
            for(int i = 0 ; i < s.length() - 1 ; i++){
                if( s.charAt(i) == s.charAt(i+1)){
                    s = s.deleteCharAt(i);
                    s = s.deleteCharAt(i);
                    
                }
            }
            return fun(s);
        }
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        StringBuffer sb = new StringBuffer(input);
        StringBuffer result = fun(sb);
        if(result.length() == 0){
            System.out.println("Empty String");
        }
        else{
            System.out.println(fun(sb));    
        }
        }
}
