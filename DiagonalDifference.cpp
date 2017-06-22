#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int a[n][n];
    int i,j;
    int x=0,y=0;
    for(i = 0 ; i < n ; i++)
        {
        for(j = 0 ; j < n ; j++)
            {
            
        
        cin>>a[i][j];
            
            if(i == j)
                x += a[i][j];
            if(i + j + 1 == n)
                y += a[i][j];
        }
    }
    cout<<abs(x-y);
    return 0;
}

