#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(long long int no_5, long long int no_3)
    {
    long long int i,j;
    for(i = 0 ; i < no_5 ; i++)
        cout<<"5";
    for(i = 0 ; i < no_3 ; i++)
        cout<<"3";
    cout<<endl;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    long long int n;
    long long int N;
    long long int no_3;
    long long int no_5;
    int flag;
    while(t--)
        {
        flag = 0;
        cin>>n;
        N = n;
        no_5 = n;
         no_3 = N - no_5;
        while(n != -1)
            {
            
            
            if( no_5  % 3 == 0 && no_3 % 5 == 0)
            {
                print(no_5,no_3);
                flag = 1;
                break;
                
            }
            n--;
            no_5 = n;
         no_3 = N - no_5;
        
            
        }
        if(flag == 1)
            continue;
        cout<<"-1"<<endl;
        
               
    }
    return 0;
}

