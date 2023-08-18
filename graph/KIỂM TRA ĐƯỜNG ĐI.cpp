/*ĐƯỜNG ĐI CÓ HƯỚNG

Bài làm tốt nhất
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh.

Hãy tìm đường đi từ đỉnh u đến đỉnh v trên đồ thị bằng thuật toán BFS.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E|+1 dòng: dòng đầu tiên đưa vào bốn số |V|, |E|, u, v tương ứng với số đỉnh, số cạnh,  đỉnh xuất phát u, đỉnh kết thúc v;
|E| dòng tiếp theo mỗi dòng đưa vào bộ đôi x, y tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán BFS của mỗi test theo khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1. */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n , m ,s,t;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
void init(){
    cin>>n>>m>>s>>t;
    for(int i=1;i<=n;i++) adj[i].clear();
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    memset(visited,false,sizeof(visited));
}
void BFS(int u){
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front();q.pop();
        for(auto y : adj[x]){
            if(!visited[y]){
                parent[y] = x;
                visited[y] = true;
                q.push(y);
            }
        }
    }
}
void path(){
    BFS(s);
    if(!visited[t]) cout<<-1<<endl;
    else{
        vector<int> res;
        while(s != t){
            res.push_back(t);
            t= parent[t];
        }
        res.push_back(s);
        reverse(res.begin(),res.end());
        int tmp = *res.rbegin();
        res.pop_back();
        for(auto x : res){
            cout<<x<<' '<<"-> ";
        }
        cout<<tmp<<endl;
    }
}
int main(){
    int tet;
    cin>>tet;
    while(tet--){
        init();
        path();
    }
    return 0;
    
}
