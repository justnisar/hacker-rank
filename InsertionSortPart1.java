import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static void print(int[] array){
        for(int i = 0 ; i < array.length ; i++)
            System.out.print(array[i] + " ");
        System.out.println();
    }

    public static void insertIntoSorted(int[] ar) {
        // Fill up this function  
        int length = ar.length;
        int i,j;
        int current = ar[length - 1];
        for(i = length - 2 ; i >= 0 ; i--){
            if(ar[i] > current){
                ar[i+1] = ar[i];
                print(ar);
            }
            else{
                ar[i+1] = current;
                print(ar);
                break;
            }
            
        }
        if(i < 0){
                ar[0] = current;
                print(ar);
            }
        
    }
    
    
/* Tail starts here */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int[] ar = new int[s];
        for(int i=0;i<s;i++){
            ar[i]=in.nextInt(); 
        }
        insertIntoSorted(ar);
    }
    
    
    private static void printArray(int[] ar) {
        for(int n: ar){
            System.out.print(n+" ");
        }
        System.out.println("");
    }
}
 

