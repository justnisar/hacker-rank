#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
        {
        
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        int i;
        set<char> s;
        int len = s1.length();
        for(i = 0 ; i < len ; i++)
          s.insert(s1[i]);
        len = s2.length();
        int flag = 0;
        for(i = 0 ; i < len ; i++)
        {
            if(s.count(s2[i]) == 1)
                {
                cout<<"YES"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout<<"NO"<<endl;
        
        s.clear();
    }
    return 0;
}

