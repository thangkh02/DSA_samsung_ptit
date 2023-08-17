#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool final = false;
char c; int k;

void sinh(string &s)
{
    int i = k -1 ;
    while (s[i] == c && i >= 0)
        i--;
    if (i < 0)
        final = true;
    else
    {
        s[i]++;
        for (int j = i + 1; j < k; j++)
        {
            s[j] = s[i];
        }
    }
}

int main()
{
    cin >> c >> k;
    string s(k, 'A');
    ina
    while (!final)
    {
        cout << s << endl;
        sinh(s);
    }
    return 0;
}
