#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    cin >> s;
    stack<string> st;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        if (isalpha(s[i]))
            st.push(string(1, s[i]));
        else {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            st.push('('+ op1 + string(1, s[i]) + op2 +')');
        }
    }

    cout << st.top() << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
