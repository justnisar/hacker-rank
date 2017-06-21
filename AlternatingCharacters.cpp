#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    string s;
    while(t--)
        {
        cin>>s;
        int count = 0;
        int len = s.length();
        int i;
        char prev = s[0];
        for(i = 1 ; i < len ; i++)
            {
            if(s[i] == prev)
                count++;
            else
                prev = s[i];
        }
    cout<<count<<endl;
    }
    return 0;
}

