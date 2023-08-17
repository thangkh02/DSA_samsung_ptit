// Cho một bảng số kích thước N x M. Chi phí khi đi qua ô (i,j) bằng a[i][j]. Nhiệm vụ của bạn là hãy tìm một đường đi từ ô (1, 1) tới ô (N, M) sao cho chi phí là nhỏ nhất.

// Tại mỗi ô, bạn được phép đi sang trái, sang phải, đi lên trên và xuống dưới.

// Input:

// Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
// Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ N, M ≤ 500).
// N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j] (0 ≤ A[i][j] ≤ 9).
// Output:

// Với mỗi test, in ra một số nguyên là chi phí nhỏ nhất cho đường đi tìm được.
#include<bits/stdc++.h>
using namespace std;
#define dp min(min(a[i+1][j],a[i-1][j]),min(a[i][j+1],a[i][j-1]))
#define maxx  1e9
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n+1, vector<int>(m+1, maxx)); 
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for(int i=1 ; i<n ; i++) a[i][0] += min(a[i-1][0],a[i+1][0]);
        for(int i=1 ; i<m ; i++) a[0][i] += min(a[0][i-1],a[0][i+1]);
        for(int i=1 ; i<n ; i++){
           for(int j=1 ; j<m ; j++)
             a[i][j] += min(a[i][j], a[i-1][j] + a[i][j-1]);
        }
        cout<<a[n-1][m-1]<<endl;
    }
    return 0;
}
