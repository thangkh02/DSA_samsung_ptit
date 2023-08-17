/*
Cho một ngăn xếp các số nguyên. Các thao tác gồm 3 lệnh: push, pop và show. Trong đó thao tác push kèm theo một giá trị cần thêm (không quá 1000). Hãy viết chương trình ghi ra kết quả của các lệnh show.

Input: Gồm nhiều dòng, mỗi dòng chứa một lệnh push, pop hoặc show. Input đảm bảo số lượng phần tử trong stack khi nhiều nhất cũng không vượt quá 200.

Output: Ghi ra màn hình các phần tử đang có trong stack theo thứ tự lưu trữ mỗi khi gặp lệnh show. Các số viết cách nhau đúng một khoảng trống. Nếu trong stack không còn gì thì in ra dòng “empty”
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    string op;
    stack<int> st;
    while(cin>>op){
        if(op=="push"){
            int x;
            cin>>x;
            st.push(x);
        }
        else if(op == "show"){
            if(st.empty()) cout<<"empty\n";
            else{
                vector<int> s;
                while(!st.empty()){
                    s.push_back(st.top());
                    st.pop();
                }
                reverse(s.begin(),s.end());
                for(auto x : s){
                    cout<<x<<' ';
                    st.push(x);
                } 
                cout<<endl;
            }
        }
        else if(op == "pop"){
            st.pop();
        }
    }
    return 0;
}
