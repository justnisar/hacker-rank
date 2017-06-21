#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
        {
        long long int n;
        cin>>n;
        long long int a[n];
        long long int i;
        for(i = 0 ; i < n ; i++)
            cin>>a[i];
        long long int b[n];
        long long int c[n];
        b[0] = a[0];
        c[n-1] = a[n-1];
        for(i = 1 ; i < n ; i++)
            {
            b[i] = a[i] + b[i-1];
            c[n - i - 1] = a[n - i - 1] + c[n - i]; 
        }
        int flag = 0;
        for(i = 0; i < n ; i++)
            {
            if(b[i] == c[i])
                {
                cout<<"YES"<<endl;
                flag = 1;
                break;
            }
    
        }
        if(flag == 0)
            cout<<"NO"<<endl;
    }
    return 0;
}

