//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String name = "";
        int phone;
        HashMap<String,Integer> hm = new HashMap<String,Integer>();
        for(int i = 0; i < n; i++){
            name = in.next();
            phone = in.nextInt();
            // Write code here
            hm.put(name,phone);
            
        }
        while(in.hasNext()){
            String s = in.next();
            // Write code here
            if(hm.containsKey(s)){
                System.out.println(s+"="+String.valueOf(hm.get(s)));
            }
            else{
                System.out.println("Not found");
            }
        }
        in.close();
    }
}

