import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        for(int i=0; i < 6; i++){
            for(int j=0; j < 6; j++){
                arr[i][j] = in.nextInt();
            }
        }
        int max = Integer.MIN_VALUE;
        int sum = 0;
        int p = 0;
        while(p < 4){
            int q = 0;
            while(q < 4){
                sum = 0;
                for(int i = p ; i < p+3 ; i++){
                    
                    for(int j = q ; j < q + 3 ; j++){
                        if(i == p+1 && (j == q || j == q + 2))
                            continue;
                        sum += arr[i][j];
                    }
                    
                }
                if(sum > max)
                        max = sum;
                q++;
            }
            p++;
        }
        
        System.out.println(max);
        
    }
}

