import java.io.*;
import java.util.*;

public class Solution {

    public static void print(int[] ar){
        int length = ar.length;
        for(int i = 0 ; i < length ; i++){
            System.out.print(ar[i] + " ");
        }
        System.out.println();
    }
    public static void insertionSortPart2(int[] ar)
    {       
           // Fill up the code for the required logic here
           // Manipulate the array as required
           // The code for Input/Output is already provided
          int length = ar.length;
          int i,j;
          for(i = 1 ; i < length ; i++){
              int current = ar[i];
              j = i - 1;
              while(j >= 0 && ar[j] > current){
                ar[j+1] = ar[j];
                j--;
              }
              ar[j+1] = current;
              print(ar);
          }
    }  
    
    
      
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
       int s = in.nextInt();
       int[] ar = new int[s];
       for(int i=0;i<s;i++){
            ar[i]=in.nextInt(); 
       }
       insertionSortPart2(ar);    
                    
    }    
    private static void printArray(int[] ar) {
      for(int n: ar){
         System.out.print(n+" ");
      }
        System.out.println("");
   }
}

