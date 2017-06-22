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
    int a[n];
    int i;
    for(i = 0 ; i < n ; i++)
        cin>>a[i];
    
    int count = 0;
    int j;
    for( i = 1 ; i < n ; i++)
        {
        j = i;
        while( j > 0 && a[j-1] > a[j])
        { 
            a[j] = a[j] + a[j-1];
            a[j-1] = a[j] - a[j-1];
            a[j] = a[j] - a[j-1];
            count++;
            j--;
        }

    }
   cout<<count<<endl;
    
    return 0;
}

