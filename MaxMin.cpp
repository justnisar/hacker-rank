#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;


// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() {
    /* The code required to enter n,k, candies is provided*/

    int N, K, unfairness;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++)
        cin >> candies[i];
    
    sort(candies,candies + N);
    
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
    unfairness = INT_MAX;
    
    int i;
    for(i = 0 ; i < N - (K - 1) ; i++)
        {
        int k = candies[i+K-1] - candies[i];
        if(k < unfairness)
            unfairness = k;
        }
    
    cout << unfairness << "\n";
    return 0;
}

