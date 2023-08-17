#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool final = false;
void sinh(int X[], int &cnt)
{
    int i = cnt;
    while (i >= 1 && X[i] == 1)
    {
        i--;
    }
    if (i == 0)
    {
        final = true;
    }
    else
    {
        int tmp = cnt - i + 1;
        --X[i];
        cnt = i;
        int q = tmp / X[i];
        int r = tmp % X[i];
        if (q)
        {
            for (int j = 1; j <= q; j++)
            {
                X[i + j] = X[i];
            }
            cnt += q;
        }
        if (r)
        {
            ++cnt;
            X[cnt] = r;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int X[100000];
        X[1] = n;
        int cnt = 1;
        while (!final)
        {
            cout<<'(';
            for (int i = 1; i < cnt; i++)
            {
                cout << X[i] << " ";
            }
            cout<<X[cnt]<<')'<<" ";
            sinh(X, cnt);
        }
        final = false;
        cout<<endl;
    }
    return 0;
}