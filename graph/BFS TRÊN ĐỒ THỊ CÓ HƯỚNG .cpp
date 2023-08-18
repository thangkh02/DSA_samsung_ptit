/* BFS TRÊN ĐỒ THỊ CÓ HƯỚNG */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n , m ,u;
bool visited[1001];
vector<int> adj[1001];
void init(){
    for(int i=1;i<=n;i++) adj[i].clear();
    cin>>n>>m>>u;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    memset(visited,false,sizeof(visited));
}
void BFS(int v){
    queue<int> q;
    q.push(v);
    visited[v] = true;
    while(!q.empty()){
        int x = q.front();
        cout<<x<<' ';
        q.pop();
        for(auto y : adj[x]){
            if(!visited[y]){
                q.push(y);
                visited[y] = true;
            }
        }
    } 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        BFS(u);
        cout<<endl;
    }
    return 0;
    
}
