#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>()); 
        set<vector<int>> res;
        for (int i = 0; i < (1 << n); i++) {
            ll sum = 0;
            vector<int> tmp;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    sum += a[j];
                    tmp.push_back(a[j]);
                }
            }
            if (sum > 0 && check(sum))
                res.insert(tmp);
        }
        for ( auto x : res) {
            for (auto y : x) {
                cout << y << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
