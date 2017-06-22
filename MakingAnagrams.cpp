#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//=+
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string x,y;
    cin>>x>>y;
    int a[26] = {0};
    int b[26] = {0};
    int i;
    int len1 = x.length();
    int len2 = y.length();
    for(i = 0 ; i < len1 ; i++)
        a[x[i] - 97]++;
    for(i = 0 ; i < len2 ; i++)
        b[y[i] - 97]++;
    
    int count = 0;
    for(i = 0 ; i < 26 ; i++)
        count += abs(a[i] - b[i]);
    cout<<count<<endl;
    return 0;
}

