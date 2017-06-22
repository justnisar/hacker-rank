// Program to print all prime factors
# include <stdio.h>
# include <math.h>
#include <iostream>
using namespace std;

int digitsum(int n)
{
    int sum = 0;
    while( n != 0)
    {
        int digit = n % 10;
        n = n/10;
        sum += digit;
    }
    return sum;
}
// A function to print all prime factors of a given number n
int primeFactors(int n)
{
    // Print the number of 2s that divide n
    
    int sum = 0;
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        sum += 2;
        n = n/2;
    }

    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);
            sum += digitsum(i);
            
            
            n = n/i;
        }
    }

    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
        sum += digitsum(n);
        //printf ("%d ", n);
return sum;
}



/* Driver program to test above function */
int main()
{
    int n;
    cin>>n;
    if(primeFactors(n) == digitsum(n))
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}

