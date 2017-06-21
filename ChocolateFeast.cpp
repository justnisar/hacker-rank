#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
        // Computer answer
        //int chocolates = 0;
        
        answer += n/c;
        int wrappers = answer;
        while(wrappers/m != 0)
            {
              int chocolates = wrappers/m;
              answer += chocolates;
              int rem = wrappers % m;
              wrappers = chocolates + rem;
        }
        
        cout<<answer<<endl;
    }
    return 0;
}

