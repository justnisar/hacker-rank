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

void display(vector<int> v)
    {
    for(vector<int>::iterator it = v.begin(); it!= v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
}
void insertionSort(vector <int>  ar) {
    int index = ar.size() - 1;
    int element = ar[index];
    while(index != 0)
        {
        if(element < ar[index - 1])
            {
            ar[index] = ar[index - 1];
            display(ar);
            index--;
        }
        else
            {
            ar[index] = element;
            display(ar);
            break;
        }
        if(index == 0)
            {
            ar[index] = element;
            display(ar);
            break;
        }
    }


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

insertionSort(_ar);
   
   return 0;
}

