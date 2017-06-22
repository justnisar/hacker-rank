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
    int i;
    for(i = 0 ; i < n ; i++){
        int x = n - i - 1;
        int y = i + 1;
        int a,b;
        for(a = 0 ; a < x ; a++)
            cout<<' ';
        for(b = 0 ; b < y ; b++)
            cout<<'#';
        cout<<endl;
    }
    return 0;
}

