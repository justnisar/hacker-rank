        /* Declare second integer, double, and String variables. */
        int ii = scan.nextInt();
        double dd = scan.nextDouble();
        String ss = scan.next();
        ss  += scan.nextLine();
        /* Read and save an integer, double, and String to your variables.*/

        /* Print the sum of both integer variables on a new line. */
        System.out.println(i + ii);
        /* Print the sum of the double variables on a new line. */
		System.out.printf("%.1f\n",d + dd);
        /* Concatenate and print the String variables on a new line; 
        	the 's' variable above should be printed first. */
        System.out.println(s + ss);
