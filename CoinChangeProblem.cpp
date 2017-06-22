#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
int denomination(int a[],int n,int m)
    {
    if(m  == 0)
        return 1;
    else if(n == 0)
        return 0;
        else if(n > 0 && m <= 0)
        return 0;
        else
        return denomination(a,n-1,m) + denomination(a,n,m - a[n-1]);
}
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int m,n;
    cin>>m>>n;
    long long int a[n];
    long long int c[n+1][m+1];
    long long int i;
    for(i = 1 ; i < m + 1 ; i++)
        c[0][i] = 0;
    
    for(i = 0 ; i < n + 1 ; i++)
        c[i][0] = 1;
    for(i = 0 ; i < n ; i++)
        cin>>a[i];
    
    long long int j;
    for(i = 1 ; i < n + 1 ; i++)
        {
        for(j = 0 ; j < m + 1 ; j++)
            {
            if( j - a[i-1] < 0)
                c[i][j] = c[i-1][j]; 
            else
                c[i][j] = c[i-1][j] + c[i][j - a[i-1]];
                
                
        }
    }
    
    cout<<c[n][m];
    
    
    return 0;
}

