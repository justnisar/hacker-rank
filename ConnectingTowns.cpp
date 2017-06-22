#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        n--;
        long long int mult = 1;
        int i;
        int m;
        for(i = 0 ;i < n ; i++)
        {
            cin>>m;
            mult = (mult * m) % 1234567;
        }
        cout<<mult<<endl;
    }
    return 0;
}

