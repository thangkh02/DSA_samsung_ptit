/* BDS */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n , m,u ;
vector<int> adj[1000];
bool visited[1000];
void init(){
    cin>>n>>m>>u;
    for(int i=1;i<=n;i++) adj[i].clear();
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}
void BFS(){
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front();q.pop();
        cout<<x<<' ';
        for(auto y : adj[x]){
            if(!visited[y]){
                q.push(y);
                visited[y] = true;
            }
        }
    }
}
void solve(){
    init();
    BFS();
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
    
}