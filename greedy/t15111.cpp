#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool check(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
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
        bool pr = false;
        for (int i = 2; i <= n / 2; i++) {
            if (check(i) && check(n - i)) {
                cout << i << " " << n - i << endl;
                pr = true;
                break;
            }
        }
        if(!pr)cout<<-1<<endl;
    }
    return 0;
}