/*Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy tìm số thành phần liên thông của đồ thị..

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; Dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra số thành phần liên thông của đồ thị bằng thuật toán DFS. */
#include <bits/stdc++.h>

using namespace std;

#define ll long long
int n, m;
vector<int> adj[1005];
bool visited[1005];
void DFS(int u){
    visited[u] = true;
    for (int v : adj[u]){
        if (!visited[v]){
            DFS(v);
        }
    }
}
int tplt(){
    int count = 0;
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            ++count;
            DFS(i); 
        }
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        for(int i=1;i<=n;i++) adj[i].clear();
        for(int i=1;i<=m;i++){  
            int x,y;cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(visited,false,sizeof(visited));
        cout<<tplt()<<endl;
    }
    return 0;
}
