#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    long long int n;
    cin>>t;
    while(t--)
        {
        cin>>n;
        long long int num = n;
        int count = 0;
        while(n != 0)
            {
            int k = n % 10;
            n = n / 10;
            if(k == 0)
                continue;
            if(num % k == 0)
                count++;
            
        }
        cout<<count<<endl;
    }
    return 0;
}

