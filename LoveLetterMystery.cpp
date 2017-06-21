#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    string s;
    cin>>t;
    while(t--)
        {
        cin>>s;
        int count = 0;
        int i = 0,j;
        j = s.length() - 1;
        for(i = 0 ; i < j ;i++,j--  )
            {
            if( s[i] != s[j])
            count = count + abs(s[i] - s[j]);
            }
        cout<<count<<endl;
    }
    return 0;
}

