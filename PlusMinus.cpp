#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double x=0,y=0,z=0;
    int n;
    cin>>n;
    int total = n;
    while(n--){
        int k;
        cin>>k;
        if(k > 0)
            x++;
        else if(k < 0)
            y++;
            else
            z++;
    }
    cout<<setprecision(3);
    cout<<x/total<<endl;
    cout<<y/total<<endl;
    cout<<z/total<<endl;
    return 0;
}

