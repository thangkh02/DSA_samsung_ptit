/* ĐẾM SỐ THÀNH PHẦN LIÊN THÔNG */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n , m ;
vector<int> adj[1001];
bool visited[1001];
void init(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) adj[i].clear();
    memset(visited,false,sizeof(visited));
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

}
void DFS(int u){
    visited[u] = true;
    for(auto x : adj[u]){
        if(!visited[x]) DFS(x);
    }
}
void cnt(){
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cnt++;
            DFS(i);
        }
    }
    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       init();
    //    DFS(1);
       cnt(); 
    }
    return 0;
    
}