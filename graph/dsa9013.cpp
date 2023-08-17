/* LIỆT KÊ CẠNH CẦU

Bài làm tốt nhất
Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy đưa ra tất cả các cạnh cầu của đồ thị?

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| + 1 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; |E| dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách các cạch cầu của mỗi test theo từng dòng. In ra đáp án theo thứ tự từ điển, theo dạng “a b …” với a < b.*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define dk ((x == a and u == b) or (x == b and u == a))
int n ,m ;
vector<int> adj[1001];
bool visited[1001];
vector<pair<int,int>> edge;
void init(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) adj[i].clear();
    edge.clear();
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        edge.push_back({x,y});
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}
void DFS(int u,int a ,int b){
    visited[u] = true;
    for(auto x : adj[u]){
        if(dk) continue;
        if(!visited[x]){
            DFS(x,a,b);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        int tplt = 0;
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                DFS(i,-1,-1);
                tplt++;
            }
        }
        vector<pair<int,int>> res;
        for(auto tmp : edge){
            memset(visited,false,sizeof(visited));
            int x = tmp.first,y = tmp.second;
            int cnt =0;
            for(int i=1;i<=n;i++){
                if(!visited[i]){
                    cnt++;
                    DFS(i,x,y);
                }
                
            }
            if(cnt > tplt) res.push_back({x,y});
        }
        for(auto x : res){
            cout<<x.first<<' '<<x.second<<' ';
        }
        cout<<endl;
    }
    return 0;
    
}