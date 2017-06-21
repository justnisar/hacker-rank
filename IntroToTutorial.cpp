#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int v;
    int n;
    cin>>v>>n;
    int a[n];
    int i;
    for(i = 0 ; i < n ; i++)
    {    
        cin>>a[i];
        if(v == a[i])
            {
            cout<<i<<endl;
            break;
        }
    }
    
    
    return 0;
}

