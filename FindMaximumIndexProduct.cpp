#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     long long int n;
    cin>>n;
     long long int a[n + 1];
     long long int l[n + 1];
     long long int r[n + 1];
    long long int max = INT_MIN;
     long long int i,j;
    for(i = 1 ; i < n+1 ; i++)
        cin>>a[i];
    
    l[1] = 0;
    r[n] = 0;
    
    for(i = 2, j = n - 1 ; i < n  ; i++,j-- )
        {
        
            int past = i- 1;
            while(true)
                {
                if(  a[past] > a[i] )
                    {
                    l[i] = past;
                    break;
                }
                else if(l[past] == 0)
                    {
                    l[i] = l[past];
                    break;
                }
                else
                    {
                    past = l[past];
                }
            }
        
             past = j + 1;
            while(true)
                {
                if( a[past] > a[j] )
                    {
                    r[j] = past;
                    break;
                }
                else if( r[past] == 0)
                    {
                    r[j] = r[past];
                    break;
                }
                else
                    {
                    past = r[past];
                }
            }
        
        
    }
    
    for(i = 1 ; i < n+1 ; i++)
        {
        long long int x = l[i];
        long long int y = r[i];
        long long int z = x * y;
        if(z > max)
            max = z;
    }
    
    cout<<max<<endl;
    return 0;
}

