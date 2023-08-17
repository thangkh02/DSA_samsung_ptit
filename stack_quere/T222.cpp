/*
Ta gọi số nguyên dương K là một số BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. Ví dụ số K = 1, 10, 101. Cho số tự nhiên N (N<231). Hãy cho biết có bao nhiêu số BDN không lớn hơn N. Ví dụ N=100 ta có 4 số BDN bao gồm các số: 1, 10, 11, 100.

Dữ liệu vào: Dòng đầu tiên ghi lại số tự nhiên T (T ≤ 50) là số lượng bộ test.

T dòng kế tiếp mỗi dòng là một số tự nhiên N (1 ≤ N ≤ 231).

Kết quả: Với mỗi số N in ra kết quả trên một dòng là số các số BDN không lớn hơn N.*/
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
        int cnt = 0;
        while(true){
            ll tmp = q.front();q.pop();
            if(tmp > n ){
                break;
            }
            cnt++;
            q.push(tmp*10);
            q.push(tmp*10 + 1);
        }
        cout<<cnt<<endl;
    }
    return 0;
    
}