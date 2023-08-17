#include<bits/stdc++.h>

using namespace std;

#define ll long long
void solve(){
    string s;
    cin>>s;
    int n = s.size()-1;
    stack<string> st;
    for(int i=n;i>=0;i--){
        if(isalpha(s[i])) st.push(string(1,s[i]));
        else{
            string op1 = st.top();st.pop();
            string op2 = st.top();st.pop();
            st.push(op1 + op2 + s[i]);
        }
    }
    cout<<st.top()<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}
