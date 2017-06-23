/*
Complete the Student class by writing the following:
A Student class constructor, which has  parameters:
A string, .
A string, .
An integer, .
An integer array (or vector) of test scores, .
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
*/

class Student extends Person{
	private int[] testScores;
    public Student(String firstName,String lastName,int id,int[] scores){
        super(firstName,lastName,id);
        testScores = scores;
    }
    public char calculate(){
        int sum = 0;
        for(int i = 0 ; i < testScores.length ; i++){
            sum += testScores[i];
        }
        int avg = sum/testScores.length;
        if(avg >= 90 && avg <= 100)
            return 'O';
        else if(avg >= 80 && avg < 90)
            return 'E';
        else if(avg >= 70 && avg < 80)
            return 'A';
        else if(avg >= 55 && avg < 70)
            return 'P';
        else if(avg >= 40 && avg < 55)
            return 'D';
        else 
            return 'T';
    }
}
