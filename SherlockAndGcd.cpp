#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int gcd(int u, int v) {
return (v != 0)?gcd(v, u%v):u;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int n;
    while(t--)
        {
        cin>>n;
        long long int a[n];
        int i;
        for(i = 0; i < n ; i++ )
            cin>>a[i];
        long long int rem;
       if(n == 1)
           rem = a[0];
        else
            {
            rem = a[0];
            for(i = 1 ; i < n; i++)
                rem = gcd(rem,a[i]);
            
            //cout<<rem<<endl;
        }
        
        if(rem == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}

