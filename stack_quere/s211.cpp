/*
Cho một bảng kích thước N x N, trong đó có các ô trống ‘.’ và vật cản ‘X’. Các hàng và các cột được đánh số từ 0.

Mỗi bước di chuyển, bạn có thể đi từ ô (x, y) tới ô (u, v) nếu như 2 ô này nằm trên cùng một hàng hoặc một cột, và không có vật cản nào ở giữa.

Cho điểm xuất phát và điểm đích. Bạn hãy tính số bước di chuyển ít nhất?

Input:

Dòng đầu ghi số bộ test (không quá 10). Mỗi test gồm:
Dòng đầu tiên là số nguyên dương N (1 ≤ N ≤ 100).
N dòng tiếp theo, mỗi dòng gồm N kí tự mô tả bảng.
Cuối cùng là 4 số nguyên a, b, c, d với (a, b) là tọa độ điểm xuất phát, (c, d) là tọa độ đích. Dữ liệu đảm bảo hai vị trí này không phải là ô có vật cản.
 

Output: 

Với mỗi test, in ra một số nguyên là đáp số của bài toán.
Ví dụ:
Input
1
3
.X.
.X.
...
0 0 0 2
Output
3
*/
/* */
#include<bits/stdc++.h>
using namespace std;
#define pa pair<int,int> 
#define ll long long
#define fi first 
#define se second  
bool visited[100][1000] ;
char a[100][100];
int n ;

int bfs(pa s,pa e){
    memset(visited,false,sizeof(visited));

    queue<pair<pa,int>> q;
    visited[s.fi][s.se] = true;
    q.push({s,0});

    while(!q.empty()){
        pa tmp = q.front().fi;
        int path = q.front().se;
        q.pop();

        int x = tmp.fi, y = tmp.se;
        if(tmp == e) return path;

        for(int r = x + 1; r < n; r++){
            if(a[r][y] == '.' and !visited[r][y]){
                visited[r][y] = true;
                q.push({{r,y},path+1});
            }
            if(a[r][y] == 'X') break;
        }
        for(int l = x - 1; l >=0 ; l--){
            if(a[l][y] == '.' and !visited[l][y]){
                visited[l][y] = true;
                q.push({{l,y},path+1});
            }
            if(a[l][y] == 'X') break;
        }
        for(int r = y + 1; r < n; r++){
            if(a[x][r] == '.' and !visited[x][r]){
                visited[x][r] = true;
                q.push({{x,r},path+1});
            }
            if(a[x][r] == 'X') break;
        }
        for(int l = y - 1; l >=0 ; l--){
            if(a[x][l] == '.' and !visited[x][l]){
                visited[x][l] = true;
                q.push({{x,l},path+1});
            }
            if(a[x][l] == 'X') break;
        }
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                char x ;
                cin>>x;
                a[i][j] = x;
            }
        }
        pa x,y;
        cin>>x.fi>>x.se>>y.fi>>y.se;
        cout<<bfs(x,y)<<endl;
    }
    return 0;
}
