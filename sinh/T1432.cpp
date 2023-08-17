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
        int n;
        cin>>n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = n - 2;
        while (i >= 0 && a[i] > a[i + 1])
            i--;
        if (i < 0){
            for(int j = 0;j<n;j++) a[j] = j+1;
            // print(a, n);
        }   
        else
        {
            int j = n - 1;
            while (a[j] < a[i])
                j--;
            swap(a[i], a[j]);
            reverse(a + i + 1, a + n);
        }
        print(a, n);
    }
    return 0;
}