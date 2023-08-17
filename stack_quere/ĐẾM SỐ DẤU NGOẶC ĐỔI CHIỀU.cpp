/*Cho một xâu chỉ gồm các kí tự ‘(‘, ‘) và có độ dài chẵn. Hãy đếm số lượng dấu ngoặc cần phải đổi chiều ít nhất, sao cho xâu mới thu được là một dãy ngoặc đúng.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 1 xâu S có độ dài không vượt quá 100 000, chỉ gồm dấu ( và ).

Output: 

Với mỗi test, in ra đáp án tìm được trên một dòng.*/
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
