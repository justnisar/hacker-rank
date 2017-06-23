import java.io.*;
import java.util.*;

public class Solution {

    public static String checkPrime(int n){
        if(n == 1)
            return "Not prime";
        for(int i = 2 ; i <= Math.sqrt(n) ; i++){
            if(n % i == 0){
                return "Not prime";
            }
        }
        return "Prime";
    }
    public static void main(String[] args) throws Exception {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            int n = Integer.parseInt(br.readLine());
            System.out.println(checkPrime(n));
        }
    }
}
