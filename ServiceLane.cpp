#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

//=+

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,t;
    cin>>n>>t;
    int a[n];
    int i;
    for(i = 0 ; i < n ; i++ )
        cin>>a[i];
    while(t--)
        {
        int x,y;
        cin>>x>>y;
        int min = INT_MAX;
        for(i = x ; i <= y ; i++)
            {
            if(a[i] < min)
                min = a[i];
        }
        cout<<min<<endl;
    }
    
    return 0;
}

