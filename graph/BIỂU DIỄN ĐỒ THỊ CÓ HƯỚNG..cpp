/* BIỂU DIỄN ĐỒ THỊ CÓ HƯỚNG.

Bài làm tốt nhất
Cho đồ thị có hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy viết chương trình thực hiện chuyển đổi biểu diễn đồ thị dưới dạng danh sách kề.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| +1 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị; |E| dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách kề của các đỉnh tương ứng theo khuôn dạng của ví dụ dưới đây. Các đỉnh trong danh sách in ra theo thứ tự tăng dần.*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ,m;
        cin>>n>>m;
        vector<int> adj[1001];
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(auto x : adj[i]){
                cout<<x<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
    
}
