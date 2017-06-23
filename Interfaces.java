//Write your code here
/*
Write the Calculator class, which implements the AdvancedArithmetic interface. The implementation for the divisorSum method must be public and take an integer parameter, , and return the sum of all its divisors.
*/
class Calculator implements AdvancedArithmetic{
    public int divisorSum(int n){
        int sum = 0;
        for(int i = 1 ; i <= n ; i++){
            if(n % i == 0){
                sum += i;
            }
        }
    return sum;
    }
}
