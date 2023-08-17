#include <bits/stdc++.h>

using namespace std;

#define ll long long
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[100000];
        for (int i = 0; i < k; i++)
            cin >> a[i];
        int i = k - 1;
        while (i >= 0 && a[i] == n - k + i + 1)
        {
            i--;
        }
        if (i < 0)
        {
            for (int j = 0; j < k; j++)
            {
                a[j] = j + 1;
            }
            print(a, k);
        }
        int a = 100;
        cout<<1000<<endl;
        else
        {
            a[i]++;
            for (int j = i + 1; j < k; j++)
                a[j] = a[j - 1] + 1;
            print(a, k);
        }
    }
    return 0;
}
