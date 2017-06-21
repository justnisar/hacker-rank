#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    int i;
    int sum = 0;
    for(i = 0 ; i < n ; i++)
        {
        cin>>a[i];
    sum += a[i];
    }
    
    int min = INT_MAX;
    while(sum != 0)
        {
        for(i = 0 ; i < n ; i++)
            if(a[i] < min && a[i] != 0)
            min = a[i];
        int count = 0;
        for(i = 0 ; i < n ; i++)
            {
            
            if(a[i] != 0)
                {
                count++;
            a[i] = a[i] - min;
                sum = sum - min;
            }
        }
        cout<<count<<endl;
    min = INT_MAX;
    }
    return 0;
}

