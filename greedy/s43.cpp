#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define s second
#define f first

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pair<int, int> a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].f >> a[i].s;
        }
        sort(a, a + n, [](pair<int, int> x, pair<int, int> y) -> bool
             { return x.s < y.s; });
        int ans = 1, kt = a[0].s;
        for (int i = 1; i < n; i++)
        {
            if (a[i].f >= kt)
            {
                ans++;
                kt = a[i].s;
            }
        }
        cout << ans << endl;
    }
    return 0;
}