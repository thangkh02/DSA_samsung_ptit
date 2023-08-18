/*kiểm tra liên thông manh tren do thi co huong  */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n,m;
vector<int> adj[1001];
bool visited[1001];
void DFS(int u){
    visited[u] = true;
    for(auto x : adj[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++) adj[i].clear();
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        bool check = true;
        for(int i =1 ; i<=n ; i++){
            memset(visited,false,sizeof(visited));
            DFS(i);
            for(int j =1;j<=n;j++){
                if(visited[j] == false){
                    check = false;
                    break;
                }
                if(!check) break;
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
    
}
