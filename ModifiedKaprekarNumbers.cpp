#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int p,q;
    cin>>p>>q;
    
    long long int a[21] = {1, 9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4950, 5050, 7272, 7777, 9999, 17344, 22222, 77778, 82656, 95121, 99999};
    
    long long int i;
    int flag = 0;
    for(i = 0 ; i < 21 ; i++)
        {
        if(a[i] >= p && a[i] <= q)
        {cout<<a[i]<<" ";flag = 1;}
    }
    
    if(flag == 0)
        cout<<"INVALID RANGE";
    
    
    return 0;
}

