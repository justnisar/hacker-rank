#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int a,b;
    cin>>a>>b;
    long long int dp[a+1];
    //long long int x = pow(2,a);
    //long long int y = pow(2,2 * a);
    dp[1] = 4 % b;
    int i;
    for(i = 2 ; i < a+1 ; i++)
        dp[i] = (dp[i-1] * dp[i-1])%b;
    cout<<dp[a]<<endl;
    return 0;
}

