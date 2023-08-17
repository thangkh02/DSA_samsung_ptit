/*Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng hậu tố về dạng tiền tố.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:

T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤106.*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
string solve(string &s){
    stack<string> st;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])) st.push(string(1,s[i]));
        else{
            string o1 = st.top();st.pop();
            string o2 = st.top();st.pop();
            st.push(s[i]+o2+o1);
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
