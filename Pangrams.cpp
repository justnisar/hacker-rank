#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[1000];
    int i = 0;
    while(cin>>s[i] != '\0')
    {i++;}
    
    int a[26] = {0};
    
    int n = i;
    //int i;
    //cout<<n<<endl;
    //for(i = 0 ; i < n ; i++)
      //  cout<<s[i];
    for(i = 0 ; i < 26 ; i++)
        a[i] = 0;
    for(i = 0 ; i < n ; i++)
        {
        if(s[i] >= 65 && s[i] <= 90 )
            a[s[i] - 65]++;
        if(s[i] >= 97 && s[i] <= 122 )
            a[s[i] - 97]++;
        
    }
    
    //for(i = 0 ; i < 26 ; i++)
      //  cout<<a[i];
    //cout<<endl;
    
    for(i = 0 ; i < 26 ; i++)
        {
        if(a[i] == 0)
            {
            //cout<<a[i];
            cout<<"not pangram";
            return 0;
        }
    }
    cout<<"pangram";
    return 0;
}

