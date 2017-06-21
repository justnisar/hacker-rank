#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,M;
    cin>>N>>M;
    
    string s[N];
    int i = N;
    int j = 0;
    for(i = 0 ; i < N ;i++)
        cin>>s[i];
    
    int max = INT_MIN;
    int k;
    int number = 0;
    int max_count = INT_MIN;;
    for(i = 0 ; i < N - 1 ;i++ )
        {
        for(j = i+1; j < N ; j++)
            {
                int count = M;
                for( k = 0 ; k < M ; k++){
                    
                    if(s[i][k] == '0' && s[j][k] == '0')
                        count--;
                }
                if(count > max_count)
                    max_count = count;
             if(count == max)
                {
                number++;
            }
            if(count > max)
                {
                max = count;
                number = 1;
            }
            
                
        }
    }
    cout<<max_count<<endl;
    cout<<number<<endl;
    return 0;
}

