/*KIỂM TRA ĐƯỜNG ĐI

Bài làm tốt nhất
Cho đồ thị vô hướng có N đỉnh và M cạnh. Có Q truy vấn, mỗi truy vấn yêu cầu trả lời câu hỏi giữa 2 đỉnh x và y có tồn tại đường đi tới nhau hay không?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm 2 số nguyên N, M (1 ≤ N, M ≤ 1000).
M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.
Dòng tiếp là số lượng truy vấn Q (1 ≤ Q ≤ 1000).
Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên x và y.
Output:  Với mỗi truy vấn, in ra “YES” nếu có đường đi từ x tới y, in ra “NO” nếu ngược lại. */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n , m ;
vector<int> adj[1001];
bool visited[1001];
void init(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) adj[i].clear();
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}
void DFS(int u){
    visited[u] = true;
    for(auto x : adj[u]){
        if(!visited[x]) DFS(x);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        int q;
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;
            DFS(x);
            if(!visited[y]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            memset(visited,false,sizeof(visited));
        }
    }
    return 0;
    
}