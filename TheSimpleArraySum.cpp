#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int sum = 0;
    long long int n;
    cin>>n;
    //long long int a[n];
    long long int i;
    for(i = 0 ; i < n ; i++)
    {   
        long long int x;
        cin>>x;
        sum += x;
    }
    cout<<sum<<endl;
    return 0;
}

