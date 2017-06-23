import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static int getNumberOfPairs(String s){
        int i,j;
        int length = s.length();
        //HashSet<String> hs = new HashSet<String>();
        int count = 0;
        ArrayList<String> al = new ArrayList<String>();
        for(i = 0 ; i < length ; i++){
            for(j = i + 1 ; j <= length ; j++){
                String str = s.substring(i,j);
                char[] str_arr = str.toCharArray();
                Arrays.sort(str_arr);
                String str1 = new String(str_arr);
                /*if(hs.contains(str1)){
                    count++;
                    hs.remove(str);
                }
                else{
                    hs.add(str1);
                }
                */
                al.add(str1);
            }
        }
        
        length = al.size();
        for(i = 0 ; i < length - 1 ; i++){
            for(j = i + 1 ; j < length ; j++){
                if(al.get(i).equals(al.get(j))){
                    count++;
                }
            }
        }
        
        
        //hs.clear();
        return count;
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-- > 0){
            String s = scan.next();
            System.out.println(getNumberOfPairs(s));    
        }
    }
}
