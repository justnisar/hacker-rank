#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string s[n];
    set<char> ss[n];
    int i;
    for(i = 0 ; i < n ; i++)
        {
        cin>>s[i];
        int len = s[i].length();
        int j;
        for(j = 0 ; j < len ; j++)
           ss[i].insert(s[i][j]);
    }
    int count = 0;
    for(i = 97 ; i <= 122 ;i++)
        {
        char ch = i;
        int f = 0;
        for(int j = 0 ; j < n ; j++)
            {
            if(ss[j].count(ch) == 0)
            f = 1;
        }
        if(f == 1)
        count++;
    }
    cout<<26-count;
    return 0;
}

