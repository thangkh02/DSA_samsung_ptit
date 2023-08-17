/*
Ban đầu cho một queue rỗng. Bạn cần thực hiện các truy vấn sau:

Trả về kích thước của queue
Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”.
Cho một số nguyên và đẩy số nguyên này vào cuối queue.
Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện.
Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1.
Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1.
Dữ liệu vào

Dòng đầu tiên chứa số nguyên T là số bộ dữ liệu, mỗi bộ dữ theo dạng sau.

Dòng đầu tiên chứa số nguyên n - lượng truy vấn (1 ≤ n ≤ 1000)

N dòng tiếp theo, mỗi dòng sẽ ghi loại truy vấn như trên, với truy vấn loại 3 sẽ có thêm một số nguyên, không quá 106.

Kết quả: In ra kết quả của các truy vấn..
*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        queue<int> q;
        int n ;cin>>n;
        while(n--){
            int op;
            cin>>op;
            if(op == 1){
                cout<<q.size()<<endl;
            }else if(op == 2){
                if(q.empty()) cout<<"YES<"<<endl;
                else cout<<"NO"<<endl;
            }else if(op == 3){
                int x;cin>>x;
                q.push(x);
            }else if(op == 4){
                if(!q.empty()) q.pop();
            }else{
                if(q.empty()) cout<<"-1"<<endl;
                else{
                    if(op == 6) cout<<q.back()<<endl;
                    if(op == 5) cout<<q.front()<<endl;
                }
            }
        }
    }
    return 0;
    
}
