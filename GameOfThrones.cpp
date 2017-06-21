#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;


int main() {
   
    string s;
    cin>>s;
     
    int flag = 0;
    
    set<char> ss;
    
    int len = s.length();
    int i;
    for(i = 0 ; i < len ; i++)
        {
        if(ss.count(s[i]) == 0)
            ss.insert(s[i]);
        else
            ss.erase(s[i]);
    }
    
    if(ss.size() > 1)
        flag = 0;
    else
        flag = 1;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}

