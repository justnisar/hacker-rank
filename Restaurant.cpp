#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <math.h>
using namespace std;

bool isdivisible(int a, int b)
    {
    if(ceil((double)a/b) == floor((double)a/b))
        return true;
    return false;
}
long long int getmin(long long int a,long long int b)
    {
    if(a < b)
        return a;
    else
        return b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
        {
        long long int l,b;
        cin>>l>>b;
        long long int limit = min(l,b);
        long long int i;
        long long int max = INT_MIN;
        long long int area = l * b;
        for(i = 1 ; i <= limit ; i++)
            {
            //long int mult = i * i;
             //double x = (double)area/mult;
            if(isdivisible(l,i) && isdivisible(b,i))
                {
                //long long int count = area/mult;
                if(i > max)
                    max = i;
            }
            
        }
       cout<<area/(max*max)<<endl; 
    }
    return 0;
}

