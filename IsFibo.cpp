#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int a[50];

string fib(long long int num)
    {
    int x = 0, y = 49;
    int mid;
    while(x <= y)
        {
        mid = (x + y)/2;
        if(num == a[mid])
            return "IsFibo";
        else if(num < a[mid])
            y = mid - 1;
        else
            x = mid + 1;
    }
    return "IsNotFibo";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int t,n;
    
    cin>>t;
    int i = 0;
    a[0] = 0;
    a[1] = 1;
    for(i = 2 ; i < 50 ; i++)
        a[i] = a[i-1] + a[i-2];
    while(t--)
        {
        cin>>n;
        cout<<fib(n)<<endl;
        
    }
    return 0;
}

