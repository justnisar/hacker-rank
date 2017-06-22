#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    long long int n;
    cin>>t;
    while(t--)
        {
        cin>>n;
        cout<<n * (n - 1)/2<<endl;
    }
    return 0;
}

