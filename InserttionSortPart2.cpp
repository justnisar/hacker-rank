#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;

void display(int n, int *a)
    {
    int i;
    for(i = 0 ; i < n ; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

void swap(int *x, int *y)
    {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

void insertionSort(int n, int *  a) {
    int i,j;
    for(i = 1; i <  n ;i++)
        {
    j = i;
    while (j > 0 && a[j-1] > a[j])
        {
        swap( &a[j] , &a[j-1]);
        j--;
        }
display(n,a);
    }
//display(n,a);
}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}

