#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector <int>  ar) {
    int pivot = ar[0];
    vector<int> v1;
    vector<int> v2;
    for(vector<int>::iterator it = ar.begin() ; it != ar.end() ; it++)
        if( *it < pivot)
        v1.push_back(*it);
        else
        v2.push_back(*it);
        
   for(vector<int>::iterator it = v1.begin() ; it != v1.end() ; it++)
        cout<<*it<<" ";
        //cout<<pivot<<" ";
   for(vector<int>::iterator it = v2.begin() ; it != v2.end() ; it++)
        cout<<*it<<" ";
        

}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

partition(_ar);
   
   return 0;
}

