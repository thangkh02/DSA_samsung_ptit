/* tính giá trị biểu thức hậu tố   */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int calc(int x, int y,char d){
    if(d == '+') return x + y;
    if(d == '-') return x - y;
    if(d == '*') return x * y;
    return x / y;
}
int solve(string s){
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            st.push(s[i]-'0');
        }
        else{
            int x1 = st.top();st.pop();
            int x2 = st.top();st.pop();
            st.push(calc(x2,x1,s[i]));
        }
    }
    return st.top();
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
