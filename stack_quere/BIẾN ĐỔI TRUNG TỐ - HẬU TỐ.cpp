/*trung tố sang hậu tố */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int priority(char x){
    if(x == '^') return 3;
    if(x == '/' or x == '*') return 2;
    if(x == '+' or x == '-') return 1;
    return 0;
}

string solve(string &s){
    stack<char> st;
    string res;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i]))
            res += s[i];
        else if(s[i] == '(') st.push('(');
        else if(s[i] == ')'){
            while(!st.empty() and st.top() != '('){
                res+=st.top();st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() and priority(s[i]) <= priority(st.top())){
                res+= st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty() and st.top() != '('){
        res+= st.top(); st.pop();
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
    }
    return 0;
    
}
