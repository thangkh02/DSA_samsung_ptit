/*Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. Cho số tự nhiên N. Hãy liệt kê các số lộc phát có không quá N chữ số.

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng bộ test (T<10);
T dòng kế tiếp mỗi dòng ghi số N (1<N<15).
  Output:

Dòng đầu tiên là số lượng số lộc phát tìm được. Dòng thứ hai in đáp án theo thứ tự tăng dần.*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        queue<string> q;
        vector<string> res;
        res.push_back("6");
        res.push_back("8");
        q.push("6");
        q.push("8");
        for(int i=0 ; res[i].size()<n ; i++){
            string u = q.front();
            q.pop();
            q.push(u + '6');
            q.push(u + '8');
            res.push_back(u + '6');
            res.push_back(u + '8');
        }
        cout<<res.size()<<endl;
        for(auto x : res) cout<<x<<' ';
        cout<<endl;
    }
    return 0;
    
}
