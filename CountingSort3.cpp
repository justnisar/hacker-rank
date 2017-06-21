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
    int a[100] = {0};
    int i;
    for(i = 0 ; i < n ; i++)
        {
        int num;
        string s;
        cin>>num;
        cin>>s;
        a[num]++;
        
    }
    for(i = 1 ; i < 100 ; i++)
        a[i] = a[i] + a[i-1];
    for(i = 0 ; i < 100 ; i++)
        cout<<a[i]<<" ";
    return 0;
}

