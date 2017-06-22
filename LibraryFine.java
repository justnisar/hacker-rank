import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int d1 = in.nextInt();
        int m1 = in.nextInt();
        int y1 = in.nextInt();
        int d2 = in.nextInt();
        int m2 = in.nextInt();
        int y2 = in.nextInt();
        
        Calendar done = new GregorianCalendar(y1,m1,d1);
        Calendar due  = new GregorianCalendar(y2,m2,d2);
        
                
        if(done.compareTo(due) <= 0)
            System.out.println("0");
        else{
            //int diffYear = done.get(Calendar.YEAR) - due.get(Calendar.YEAR);
            //int diffMonth = done.get(Calendar.MONTH) - due.get(Calendar.MONTH);
            //int diffDate = done.get(Calendar.DAY_OF_MONTH) - due.get(Calendar.DAY_OF_MONTH);
            
            int diffYear = y1 - y2;
            int diffMonth = m1 - m2;
            int diffDate = d1 - d2;

            
            //System.out.println(diffYear);
            //System.out.println(diffMonth);
            //System.out.println(diffDate);
            
            if(diffYear == 0 && diffMonth == 0)
                System.out.println(diffDate * 15);
            else if(diffYear == 0)
                System.out.println(diffMonth * 500);
            else
                System.out.println("10000");
        }
    }
}

