#include <bits/stdc++.h>
using namespace std;
int check = 0, n;
int a[100];
int num;
set<string> v;
bool isPrime(int num)
{
    if(n < 2) return false;
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0)
            return false;
    }
    return true;
}
void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        if (i < n)
            a[i] = 0;
        else
            a[i] = 1;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
        check = 1;
    else
    {
        a[i] = 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int b[n + 6];
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        sort(b+1, b + n + 1, greater<int>());
        ktao();
        check = 0;
        while (!check)
        {
            string tmp="";
            long long sum = 0;
            for (int i = 1; i <= n; i++){
                if (a[i]){
                    sum += b[i];
                    tmp += (to_string(b[i]) + " ");
                }
            }
            if (isPrime(sum)){
                v.insert(tmp);
            }
            sinh();
        }
        for (auto x : v)
        {
        check = 0 ;
            cout << x << endl;
        }
    }
    return 0;
}