#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

long long int getmax(long long int a, long long int b)
    {
    if(a > b)
        return a;
    else
        return b;
}

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
        long long int second = 0;
        long long int max_so_far = 0,max_ending_here = 0;
        int flag = 0;
        long long int max = INT_MIN;
        
        for(i = 0 ; i < n ; i++)
        {
            cin>>a[i];
            max_ending_here = getmax(0,max_ending_here + a[i]);
            max_so_far      = getmax(max_ending_here,max_so_far);
            
            if(a[i] > 0)
                {
            second += a[i];
                flag = 1;
            }
            if(a[i] > max)
                max = a[i];
        }
        
        if(flag == 0)
            cout<<max<<" "<<max<<endl;
        else
           cout<<max_so_far<<" "<<second<<endl;
        
        
    }
    return 0;
}

