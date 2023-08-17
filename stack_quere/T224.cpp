/*Cho số tự nhiên N. Hãy tìm số nguyên dương X nhỏ nhất được tạo bởi số 9 và số 0 chia hết cho N. Ví dụ với N = 5 ta sẽ tìm ra  X = 90.

Input:

Dòng đầu tiên ghi lại số lượng test T (T≤100).
Những dòng kế tiếp mỗi dòng ghi lại một test. Mỗi test là một số tự nhiên N được ghi trên một dòng (N≤100).
Output:

Đưa ra theo từng dòng số X nhỏ nhất chia hết cho N tìm được . */
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
        q.push(9);
        while(true){
            ll tmp = q.front();q.pop();
            if(tmp % n == 0){
                cout<<tmp<<endl;
                break;
            }
            q.push(tmp*10);
            q.push(tmp*10 + 9);
        }
    }
    return 0;
    
}
