#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//=+
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
        {
        
        long long int b,w,x,y,z;
        cin>>b>>w>>x>>y>>z;
        long long int a_x,a_y;
        if(x > y + z)
            a_x = y + z;
        else
            a_x = x;
        if(y > x + z)
            a_y = x + z;
        else
            a_y = y;
        cout<<a_x*b + a_y*w<<endl;
        
    }
    return 0;
}

