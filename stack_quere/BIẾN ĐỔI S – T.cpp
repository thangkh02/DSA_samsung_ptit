/* Cho hai số nguyên dương S và T (S, T<10000) và hai thao tác (a), (b) dưới đây:

                   Thao tác (a): Trừ S đi 1  (S = S-1) ;

Thao tác (b): Nhân S với 2 ( S = S*2);

Hãy dịch chuyển S thành T sao cho số lần thực hiện các thao tác (a), (b) là ít nhất. Ví dụ với    S =2, T=5 thì số các bước ít nhất để dịch chuyển S thành T thông qua 4 thao tác sau:

Thao tác (a): 2*2 = 4;

Thao tác (b): 4-1 = 3;

Thao tác (a): 3*2 = 6;

Thao tác (b): 6-1 = 5;

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một bộ đôi S và T.
          Output: Đưa ra kết quả mỗi test theo từng dòng.*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int step(int s,int t)
{
    unordered_set<int> visited;
    queue<pair<int,int>> q;
    q.push({s,0});
    visited.insert(s);  
    while(!q.empty()){
        int u = q.front().first,v = q.front().second;q.pop();
        if(u == t) return v;
        if(u * 2 == t or u -1 == t) return v+1;
        if(u-1 > 0 and visited.find(u-1) == visited.end()){
            q.push({u-1,v+1});
            visited.insert(u-1);
        }
        if(u < t and visited.find(u*2) == visited.end()){
            q.push({u*2,v+1});
            visited.insert(u*2);
        }
    }
    return -1;  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,t;
        cin>>s>>t;
        cout<<step(s,t)<<endl;
    }
    return 0;
    
}
