/* ĐIỂM NÚT GIAO THÔNG TRỌNG YẾU

Bài làm tốt nhất
Một thành phố có N điểm nút giao thông. Các tuyến đường hai chiều được thiết kế giúp cho người dân có thể đi từ một nút bất kỳ đến tất cả các nút còn lại.

Những nút giao thông trọng yếu được định nghĩa là nút giao thông mà nếu các con đường đến nó đều bị chặn thì thành phố sẽ bị chia cắt, tức là khi đó sẽ có những cặp điểm nút không thể đi đến nhau được nữa.

Giả sử các điểm nút giao thông được đánh số từ 1 đến N. Hãy liệt kê các nút giao thông trọng yếu theo thứ tự tăng dần.

Input

Dòng đầu là số bộ test (không quá 100)
Mỗi bộ test bắt đầu với số nút giao thông N (không quá 1000) và số tuyến đường M.
Tiếp theo là một dòng có M cặp số mô tả các tuyến đường hai chiều trong thành phố.
Output

Dòng đầu ghi ra số lượng điểm nút giao thông trọng yếu

Dòng thứ 2 lần lượt liệt kê các nút giao thông trọng yếu theo thứ tự tăng dần*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n , m ;
vector<int> adj[1001];
bool visited[1001];
void DFS(int u){
    int cnt = 0;
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
        memset(visited,false,sizeof(visited));
        for(int i=0;i<m;i++){
            int x, y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int tplt = 0;
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                tplt++;
                DFS(i);
            }
        }
        
        set<int> res;
        for(int i=1;i<=n;i++){
            memset(visited,false,sizeof(visited));
            visited[i] = true;
            int cnt =0;
            for(int j=1;j<=n;j++){
                if(!visited[j]){
                    cnt++;
                    DFS(j);
                }
            }
            if(cnt!=tplt) res.insert(i);
        }
        cout<<res.size()<<endl;
        for(auto y : res){
            cout<<y<<' ';
        }
        cout<<endl;
    }
    return 0;
    
}
