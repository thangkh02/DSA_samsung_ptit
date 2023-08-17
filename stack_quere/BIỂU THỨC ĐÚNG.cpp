/*BIỂU THỨC ĐÚNG
Cho biểu thức số học bất kỳ. Nhiệm vụ của bạn là xác định độ dài lớn nhất của các cặp đóng mở ngoặc đúng lồng nhau. Ví dụ với biểu thức P = “( ((X)) (((Y))) )” ta có độ dài các cặp đóng mở ngoặc lồng nhau đúng là 4.

Nếu biểu thức không đúng hãy đưa ra -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T (1 ≤ T ≤ 100)
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một biểu thức số học được đưa vào trên một dòng. Độ dài biểu thức không quá 106
Output:

Đưa ra kết quả mỗi test theo từng dòng.

Input:
2
(((X))(((Y))))
(b)((c)()
Output:
4
-1
*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int cnt(string &s){
    stack<char> st;
    int Count = 0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '(') st.push(s[i]);
        else if (s[i] == ')'){
            if(st.empty() or st.top() != '(' ) return -1;
            else{
                Count = max(Count,(int)st.size());
                st.pop();
            }
        }
    }
    if(!st.empty()) return -1;
    return Count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<cnt(s)<<endl;
    }
    return 0;
    
}
