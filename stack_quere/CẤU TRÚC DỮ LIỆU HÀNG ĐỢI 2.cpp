/*Yêu cầu bạn xây dựng một queue với các truy vấn sau đây:

“PUSH x”: Thêm phần tử x vào cuối của queue (0 ≤ x ≤ 1000).

“PRINTFRONT”: In ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.

“POP”: Xóa phần tử ở đầu của queue. Nếu queue rỗng, không làm gì cả.

Dữ liệu vào:

Dòng đầu tiên là số lượng truy vấn Q (Q ≤ 100000).

Mỗi truy vấn có dạng như trên.

Kết quả:

 

Với mỗi truy vấn “PRINT”, hãy in ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.

Ví dụ: */
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    queue<int> q;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s == "PUSH"){
            int x;
            cin>>x;
            q.push(x);
        }else if(s == "PRINTFRONT" ){
            if(q.empty()) cout<<"NONE"<<endl;
            else cout<<q.front()<<endl;
        }else if(s == "POP") if(!q.empty()) q.pop();
    }
    return 0;
    
}
