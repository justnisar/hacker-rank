#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int t;
    long long int k;
    cin>>t;
    while(t--)
        {
        cin>>k;
        long long int half;
        half = k/2;
        if(k%2 == 0)
            {
            cout<<half*half<<endl;
        }
        else
            {
            cout<<half*(half+1)<<endl;
        }
    }
    return 0;
}

