#include<bits/stdc++.h>

using namespace std;

#define ll long long
bool OPERATOR(char x){
    if(x == '+' || x=='/' || x =='-' ||x == '*') return true;
    else return false;
}
bool check(string &s){
    stack<char> st;
    int check = false;
    char x = '1';
    for(int i=0;i<s.size();i++){
        if(s[i] == '('){
            st.push(s[i]);
        } 
        else if(OPERATOR(s[i]) && !st.empty()){
            st.push(x);
        }
        else if(s[i] == ')'){
            if(st.top() == '(') return true;
            else{
                while(st.top() == '1') st.pop();
                st.pop();
            }
        }
    }
    if(st.empty()) return false;
    else return true;
}
void solve(){
    string s;
    getline(cin,s);
    if(check(s)) cout<<"Yes\n";
    else cout<<"No\n";
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solve();
    }
    return 0;
    
}