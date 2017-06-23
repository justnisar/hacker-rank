import java.io.*;
import java.util.*;

public class Solution {
    
    public static void swap(int[] array,int i,int j){
                int t = array[i];
                array[i] = array[j];
                array[j] = t;
    }
    
    public static int partition(int[] array,int low,int high){
        int i = low - 1;
        int pivot = array[high];
        for(int j = low ; j < high ; j++){
            if(array[j] <= pivot){
                i++;
                swap(array,i,j);
            }
        }
        swap(array,i+1,high);
        return i+1;
        }
    
    
    public static int qs(int[] array,int low,int high,int mid){
        
        int p = partition(array, low, high);
        if(mid == p){
            return array[p];
        }
        else if(p < mid){
            return qs(array,p+1,high,mid);
        }
        else{
            return qs(array,low,p-1,mid);
        }
    
    }
    
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] array = new int[n];
        for(int i = 0 ; i < n ; i++){
            array[i] = scan.nextInt();
        }
        System.out.println(qs(array,0,n-1,n/2));
    }
}
