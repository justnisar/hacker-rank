#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n;
    cin>>n;
    long long int a[n];
    long long int i,sum = 0;
    for(i = 0 ; i < n ; i++)
        {
        cin>>a[i];
        sum += a[i];
    }
        
    cout<<sum<<endl;
    return 0;
}

