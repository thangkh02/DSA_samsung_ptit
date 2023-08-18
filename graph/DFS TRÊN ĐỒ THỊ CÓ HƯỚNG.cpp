/*Cho đồ thị có hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều sâu bắt đầu tại đỉnh uÎV (DFS(u)=?)

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào ba số |V|, |E|, uÎV tương ứng với số đỉnh, số cạnh và đỉnh bắt đầu duyệt; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách các đỉnh được duyệt theo thuật toán DFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây. */
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
void DFS(int v){
    cout<<v<<' ';
    visited[v] = true;
    for(auto x : adj[v]){
        if(!visited[x]) DFS(x);
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
