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
        int m;
        int n;
        cin>>m>>n;
        int a[n];
        int i;
        for(i = 0 ; i < n ; i++)
            cin>>a[i];
        
        int j;
        for(i = 0 ; i < n - 1 ; i++)
            {
            for(j = i + 1; j < n ; j++)
                {
                if(a[i] + a[j] == m)
                    {
                    cout<<i+1<<" "<<j+1<<endl;
                }
            }
        }
        
        
    }
    return 0;
}

