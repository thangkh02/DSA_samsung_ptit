/* DFS */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n , m, u;
vector<int> adj[1005];
bool visited[1005] ;
void init(){
    cin>>n>>m>>u;
    for(int i=1;i<=n;i++) adj[i].clear();
    for(int i=0 ; i<m ; i++){
        int x,y;cin>>x>>y;
        adj[y].push_back(x);  
        adj[x].push_back(y);
    }
    memset(visited,false,sizeof(visited));
}
void DFS(int tmp){
    cout<<tmp<<' ';
    visited[tmp] = true;
    for(auto x : adj[tmp]){ 
        if(!visited[x]){
            DFS(x);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        DFS(u);
        cout<<endl;
    }
    return 0;
    
}