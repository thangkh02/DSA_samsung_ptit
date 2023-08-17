/* phần tử đầu tiên lớn hơn bên phải  */
#include<bits/stdc++.h>

using namespace std;

#define ll long long
vector<int> solve(vector<int> &a){
    vector<int> res(a.size(),0);
    stack<int> st;
    st.push(0);
    for(int i=1 ; i < a.size() ; i++){
        while(!st.empty() and a[st.top()] < a[i]){
            res[st.top()] = a[i];
            st.pop(); 
        }
        st.push(i);
    }
    for(int i=0;i<a.size();i++) if(res[i] == 0) res[i] = -1;
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> res = solve(a);
        for(auto x : res) cout<<x<<' ';
        cout<<endl;
    }
    return 0;
    
}