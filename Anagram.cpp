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
        string s;
        cin>>s;
        int n = s.length(); 
        if(n % 2 == 1 )
            {
            cout<<"-1"<<endl;
            continue;
        }
        int a[26] = {0};
        int i;
        for(i = 0 ; i < n/2 ;i++)
            a[s[i] - 97 ]++;
        for(i = n/2 ; i < n; i++)
            if(a[s[i] - 97] != 0)
            a[s[i] - 97]--;
            
        int count = 0;
        for(i = 0 ; i < 26 ; i++)
            count += a[i];
        
        cout<<count<<endl;
            
        
    }
    return 0;
}

