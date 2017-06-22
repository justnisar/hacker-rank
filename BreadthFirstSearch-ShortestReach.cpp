#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int v[n+1];
        for(int i = 1 ; i < n+1 ; i++)
            v[i] = -1;
        int g[n+1][n+1]={0};
        for(int i = 1 ; i < n+1 ; i++)
            for(int j = 1 ; j < n+1 ; j++)
            g[i][j] = 0;
        int a,b;
        for(int i = 0 ; i < m ; i++){
            int a,b;
            cin>>a>>b;
            g[a][b] = 1;
            g[b][a] = 1;
        }
        int s;
        cin>>s;
        v[s] = 0;
        queue<int> q;
        q.push(s);
        
        while(q.empty() != true){
            int k = q.front();
            q.pop();
            
            for(int i = 1; i < n+1 ;i++ ){
                if(g[k][i] == 1 && v[i] == -1 ){
                    v[i] = v[k] + 1;
                    q.push(i);
                }
            }
            
        }
        for(int i = 1 ; i < n+1 ;i++){
            if(v[i] == 0)
                continue;
            else if(v[i] == -1)
                cout<<v[i]<<" ";
            else
                cout<<6 * v[i]<<" ";
        }
        cout<<endl;
         
    }
   
    return 0;
}

