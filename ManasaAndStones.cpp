#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    int n,a,b;
    cin>>t;
    
    while(t--)
        {
        cin>>n>>a>>b;
        int i = n - 1;
        int j = 0;
        //vector<int> v;
        set<int> v;
        while(i != -1)
            {
                //v.push_back(a * i + b * j);
            v.insert(a * i + b * j);    
            i--;
                j++;
        }
        //sort(v.begin(),v.begin() + v.size());
        for (set<int>::iterator it = v.begin() ; it != v.end(); ++it)
    cout<<*it<<" ";
        
        cout<<endl;
        v.clear();
            
        }
    
    return 0;
}

