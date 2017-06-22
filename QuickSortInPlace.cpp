
using namespace std;
#include<stdio.h>
#include<iostream>

void swap ( int* a, int* b )
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArr( int arr[], int n )
{
    int i;
    for ( i = 0; i < n; ++i )
        printf( "%d ", arr[i] );
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
        }
    }
    swap (&arr[i + 1], &arr[h]);
    return (i + 1);
}

/* A[] --> Array to be sorted, l  --> Starting index, h  --> Ending index */
void quickSort(int A[], int l, int h, int n)
{
    if (l < h)
    {
        int p = partition(A, l, h);
        printArr(A,n);
        cout<<endl;
         /* Partitioning index */
        quickSort(A, l, p - 1, n);
        quickSort(A, p + 1, h, n);
    }

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
    quickSort( arr, 0, n - 1, n );
    //printArr( arr, 0,n-1 );
    return 0;
}

