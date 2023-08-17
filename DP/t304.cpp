#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int f[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
                f[i] = max(f[i], f[j] + 1);
        }
    }
    cout << *max_element(f, f + n);
    return 0;
}