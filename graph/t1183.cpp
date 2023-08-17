/* TÌM ĐƯỜNG ĐI THEO DFS VỚI ĐỒ THỊ VÔ HƯỚNG */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n , m,s,t;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
void dfs(int u){
    visited[u] = true;
    for(auto x : adj[u]){
        if(!visited[x]){
            dfs(x);
            parent[x] = u;
        }
    }
}
void init(){
    cin>>n>>m>>s>>t;
    for(int i=1;i<=n;i++) adj[i].clear();
    memset(visited,false,sizeof(visited));
    memset(parent,0,sizeof(parent));
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void path(){
    dfs(s);
    if(!visited[t]) cout<<-1<<endl;
    else{
        vector<int> res;
        while (t != s)
        {
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(),res.end());
        for(auto x : res) cout<<x<<' ';
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        dfs(s);
        path();
    }
    return 0;
    
}