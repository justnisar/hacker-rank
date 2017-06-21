#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    //int a[n][n];
    string s[n];
    int a[n][n];
    int b[n][n];
    int i,j;
    for(i = 0 ; i < n ; i++)
        {
        cin>>s[i];
        for(j = 0 ; j < n ; j++)
            {
            a[i][j] = (int)s[i][j] - 48;
            b[i][j] = (int)s[i][j] - 48;
        }
            
        
    }
    
    for(i = 1 ; i < n-1 ; i++)
        {
        for(j = 1 ; j < n-1 ; j++)
            {
            if(a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1])
                b[i][j] = -1;
        }
    }
    
    for(i = 0 ; i < n ; i++)
        {
        for(j = 0 ; j < n ; j++)
            {
            if(b[i][j] == -1)
                cout<<"X";
            else
                cout<<a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}














































#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    //int a[n][n];
    string s[n];
    int a[n][n];
    int b[n][n];
    int i,j;
    for(i = 0 ; i < n ; i++)
        {
        cin>>s[i];
        for(j = 0 ; j < n ; j++)
            {
            a[i][j] = (int)s[i][j] - 48;
            b[i][j] = (int)s[i][j] - 48;
        }
            
        
    }
    
    for(i = 1 ; i < n-1 ; i++)
        {
        for(j = 1 ; j < n-1 ; j++)
            {
            if(a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1])
                b[i][j] = -1;
        }
    }
    
    for(i = 0 ; i < n ; i++)
        {
        for(j = 0 ; j < n ; j++)
            {
            if(b[i][j] == -1)
                cout<<"X";
            else
                cout<<a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}























































