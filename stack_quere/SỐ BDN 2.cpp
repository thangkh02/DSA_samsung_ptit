/* SỐ BDN 2

Bài làm tốt nhất
Ta gọi số nguyên dương K là một số BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. Ví dụ số K =  101 là số BDN, k=102 không phải là số BDN.

Số BDN của N là số P =M´N sao cho P là số BDN. Cho số tự nhiên N (N<1000), hãy tìm số BDN nhỏ nhất của N.

Ví dụ. Với N=2, ta tìm được số BDN của N là P = 5´2=10. N = 17 ta tìm được số BDN của 17 là P = 653´17=11101.

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số tự nhiên N.
Output:Đưa ra kết quả mỗi test theo từng dòng..*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n ;
        cin>>n;
        queue<ll> q;
        q.push(1);
        while(true){
            ll tmp = q.front();q.pop();
            if(tmp % n == 0){
                cout<<tmp<<endl;
                break;
            }
            q.push(tmp*10);
            q.push(tmp*10 + 1);
        }
    }
    return 0;
    
}
