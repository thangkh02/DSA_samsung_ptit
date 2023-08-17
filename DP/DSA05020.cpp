/*
Cho bảng A[] kích thước N x M (N hàng, M cột). Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới. Khi đi qua ô (i, j), điểm nhận được bằng A[i][j].

Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là nhỏ nhất.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm số nguyên dương N và M.
N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j] (0 ≤ A[i] ≤ 1000).
Output:

Với mỗi test, in ra kết quả trên một dòng.
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long
int solve(vector <vector <int>> &arr, int n, int m)
{
    for (int i = 1; i < m; i++)
        arr[0][i] += arr[0][i - 1];
    for (int i = 1; i < n; i++)
        arr[i][0] += arr[i - 1][0];
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            arr[i][j] += min(arr[i - 1][j], min(arr[i][j - 1], arr[i - 1][j - 1]));
    return arr[n - 1][m - 1];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector <vector <int>> arr(n, vector <int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << solve(arr, n, m) << endl;
    }
    return 0;
}