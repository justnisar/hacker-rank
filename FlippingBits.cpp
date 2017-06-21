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
    unsigned int a[n];
    unsigned int i;
    for(i = 0 ; i < n ; i++)
        {
        cin>>a[i];
        cout<<4294967295 - a[i]<<endl;
    }
    return 0;
}

