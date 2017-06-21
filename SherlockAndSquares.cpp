#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int T;
    cin>>T;
    long long int A,B; 
    while(T--)
        {
        cin>>A>>B;
        long long int A_min = floor(sqrt(A));
        long long int count = 0;
        long long int A_min_square = A_min * A_min;
        do
            {
            
            if(A_min_square >= A && A_min_square <= B)
                count++;
            A_min++;
            A_min_square = A_min * A_min;
        }while(A_min_square<=B);
            cout<<count<<endl;
    }
    return 0;
}

