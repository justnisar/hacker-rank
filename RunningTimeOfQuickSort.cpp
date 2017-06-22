
#include<iostream>
#include<stdio.h>
using namespace std;

int cnt = 0;

int insertionSort(int arr[], int n)
{
    int count = 0;
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
           count++;
       }
       arr[j+1] = key;
   }
return count;
}


void swap ( int* a, int* b )
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArr( int arr[], int start, int n )
{
    int f = 0;
    
    int i;
    for ( i = start; i <= n; ++i )
    {
        f = 1;
        printf( "%d ", arr[i] );
    }
    if(f == 1)
    cout<<endl;
        
}

int partition (int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);
 
    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap (&arr[i], &arr[j]);
            cnt++;
        }
    }
    swap (&arr[i + 1], &arr[h]);
    cnt++;
    return (i + 1);
}

/* A[] --> Array to be sorted, l  --> Starting index, h  --> Ending index */
void quickSort(int A[], int l, int h)
{
    if (l < h)
    {
        int p = partition(A, l, h); /* Partitioning index */
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, h);
    }
    //if(l!=h)
    //printArr(A,l,h);

}


int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int i;
    for(i = 0 ; i < n ; i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    quickSort(a,0,n-1);
    cout<<insertionSort(b,n) - cnt;

}

