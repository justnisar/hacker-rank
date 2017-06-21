#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n;
    cin>>n;
    long long int a[n];
    long long int i;
    long long int min = INT_MAX;
    //set<long long int> s;
    vector<long long int> ss;
    for(i = 0 ; i < n ; i++)
        {
        cin>>a[i];
        //s.insert(a[i]);       
        
    }
    sort(a,a+n);
    
    //set<long long int> ss;
    
    for(i = 0 ; i < n-1 ; i++)
        {
        if(abs(a[i+1] - a[i]) < min)
            {
            min = abs(a[i+1] - a[i]);
            ss.clear();
            ss.push_back(a[i]);
            ss.push_back(a[i+1]);
        }
        else if(abs(a[i] - a[i+1]) == min)
            {
            ss.push_back(a[i]);
            ss.push_back(a[i+1]);
        }
    }
    
    /*for(set<long long int>::iterator it = s.begin(); it!= s.end(); it++)
        {
        if(it == next()
        long long int diff = abs(*++it - *it);
        
        if(diff < min)
            {
            ss.clear();
            ss.insert(*it);
            ss.insert(*(it++));
        }
        else if(diff == min)
            {
            ss.insert(*it);
            ss.insert(*(it++));
        }
    }*/
    sort(ss.begin(),ss.begin() + ss.size());
    for(vector<long long int>::iterator it = ss.begin(); it!= ss.end();it++)
        cout<<*it<<" ";
    
    
    
    
    return 0;
}

