/* danh sách cạnh sang danh sách kề  */
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        multiset<int> adj[1001];
        int n , m ;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int x ,y;
            cin>>x>>y;
            adj[x].insert(y);
            adj[y].insert(x);
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(auto j : adj[i]){
                cout<<j<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
    
}
