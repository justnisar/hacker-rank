#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int n;
    int a[100] = {0};
    cin>>n;
    int arr[n];
    int i;
    for(i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        a[arr[i]]++;
        
    }
    for(i = 0 ; i < 100 ; i++)
        cout<<a[i]<<" ";
    
    return 0;
}

