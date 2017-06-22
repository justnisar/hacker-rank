#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//=
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    int len = s.length();
    //cout<<len<<endl;
    int r = floor(sqrt(len));
    int c = ceil(sqrt(len));
    if(r * c < len)
        r++;
    char a[r][c];
    int i,j;
    int count = 0;
    for(i = 0 ; i < r ; i++)
        {
        for(j = 0 ; j < c ; j++)
            {   if(count < len)
                a[i][j] = s[count];
                else
                a[i][j] = ' ';
             count++;
        }
    }
    /*for(i = 0 ; i < r ; i++)
        {
        for(j = 0 ; j < c ; j++)
            {   
            cout<<a[i][j];
        }
        cout<<endl;
    }*/
    
    
    
    for(i = 0 ; i < c ; i++)
        {
        for(j = 0 ; j < r ; j++)
            {
            if(a[j][i] != ' ')
            cout<<a[j][i];
        }
        cout<<" ";
    }
    
    
    
    return 0;
}

