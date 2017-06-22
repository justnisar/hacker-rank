
using namespace std;
#include<stdio.h>
#include<iostream>

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
    int x = arr[l];
    int p = l;
    //int i = (l - 1);
    int i,j;

    for(i = l + 1 ; i <= h ; i++)
    {
        if(arr[i] > x)
            continue;
        else
        {
            j = i;
            while(j != p)
            {
                swap(&arr[j],&arr[j-1]);
                j--;
            }
            p++;

        }

    }
    return p;
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
    if(l!=h)
    printArr(A,l,h);

}

int main()
{
    
    //int arr[] = {5,8,1,3,7,9,2};

    //int n = sizeof( arr ) / sizeof( *arr );
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i = 0 ; i < n ; i++)
        cin>>arr[i];
    quickSort( arr, 0, n - 1 );
    //printArr( arr, 0,n-1 );
    return 0;
}

