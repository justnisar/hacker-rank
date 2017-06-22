#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

//=
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
        {
        string s;
        cin>>s;
        int n = s.length();
        int i;
        int j;
        int flag = 0;
        for(i = 0 , j = n - 1 ; i < n - 1 ; i++,j-- )
            {
            if(abs(s[i] - s[i+1]) != abs(s[j] - s[j-1]))
                {
                cout<<"Not Funny"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout<<"Funny"<<endl;
    }
    return 0;
}

