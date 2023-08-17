/* ĐƯỜNG ĐI THEO BFS TRÊN ĐỒ THỊ VÔ HƯỚNG */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n , m , s,t;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

void init(){
    cin>>n>>m>>s>>t;
    for(int i=1;i<=n;i++) adj[i].clear();
    memset(parent,0,sizeof(parent));
    memset(visited,false,sizeof(visited));
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void BFS(int u){
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front();q.pop();
        for(auto y : adj[x]){
            if(!visited[y]){
                visited[y] = true;
                q.push(y);
                parent[y] = x;
            }
        }
    }
}
void path(){
    BFS(s);
    if(!visited[t]){
        cout<<-1<<endl;
    }else{
        vector<int> res;
        while(s != t){
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(),res.end());
        for(auto x : res){
            cout<<x<<' ';
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        BFS(s);
        path();       
    }
    return 0;
    
}