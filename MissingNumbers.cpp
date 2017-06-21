#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v1;
    //vector<int> v2;
    map<int,int> mm;
    
    long long int n,m,i;
    cin>>n;
    int x;
    for(i = 0 ; i < n ; i++)
        {
        cin>>x;
        v1.push_back(x);
    }
    cin>>m;
    for(i = 0 ; i < m ; i++)
        {
        cin>>x;
        if(mm.count(x) == 0)
            mm[x] = 1;
        else
            mm[x] = mm[x] + 1;
    }
    
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
        {
        if(mm.count(*it) != 0)
            mm[*it]--;
        if(mm[*it] == 0)
            mm.erase(*it);
    }
    
    for(map<int,int>::iterator it = mm.begin(); it != mm.end(); it++)
        cout<<it->first<<" ";
    
    
    return 0;
}

