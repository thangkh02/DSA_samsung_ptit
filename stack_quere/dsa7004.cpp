#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    stack<char> st;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(') st.push(s[i]);
        else{
            if (st.empty() or st.top() != '('){
                cnt++;
                st.push('(');
            }
            else
                st.pop();
        }
    }
    cnt += st.size() / 2;
    cout << cnt << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
