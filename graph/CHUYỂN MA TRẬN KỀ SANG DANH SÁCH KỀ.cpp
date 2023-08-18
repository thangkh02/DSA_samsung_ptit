/* ma tran ke sang canh ke  */
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n ;
    cin>>n;
    set<int> adj[1001];
    int a[n+1][n+1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            if(a[i][j]) adj[i].insert(j);
        }
    for(int i=1;i<=n;i++){
        for(auto x : adj[i]){
            cout<<x<<' ';
        }
        cout<<endl;
    }
    return 0;
    
}
