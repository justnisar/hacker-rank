#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
/*
int knapsack(int a[],int n,int m)
    {
    int max;
    if(m <= 0)
        return 0;
    else
        {
        max = INT_MIN;
        int i;
        for(i = 0 ; i < n ; i++)
            {
            int count;
            if(m - a[i] < 0)
                count = 0;
            else
                count = a[i] + knapsack(a,n,m - a[i]);
            if(count > max)
                max = count;
        }
    }
return max;
}
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        {
        int n,m;
        cin>>n>>m;
        int a[n];
        int i;
        for(i = 0 ; i < n ; i++)
            cin>>a[i];
        
        int ks[m+1];
        ks[0] = 0;
        int j;
        int count;
        int max;
        for(i = 1; i < m+1 ;i++)
               {
            max = INT_MIN;
                   for(j = 0 ; j < n ; j++)
                       {
                  //count = INT_MIN;
                       
                       if(i - a[j] < 0)
                       count = 0;
                       else
                       count = a[j] + ks[i - a[j] ];
                       
                       
                       if(count > max)
                           max = count;
                   }
               ks[i] = max;
               }
        
        
        cout<<ks[m]<<endl;
    }
    return 0;
}

