/*BIẾN ĐỔI SỐ TỰ NHIÊN
Cho số tự nhiên N (N<10^9) và hai phép biến đổi (a), (b) dưới đây.

Thao tác (a): Trừ N đi 1 (N=N-1). Ví dụ N=17, thao tác (a) biến đổi N = N-1 =16.
Thao tác (b): N = max(u,v) nếu u*v =N (u>1, v>1). Ví dụ N=16, thao tác (b) có thể biến đổi N = max(2, 8)=8 hoặc N=max(4, 4)=4.
Chỉ được phép sử dụng hai thao tác (a) hoặc (b), hãy biến đổi N thành 1 sao số các thao tác (a), (b) được thực hiện ít nhất. Ví dụ với N=17, số các phép (a), (b) nhỏ nhất biến đổi N thành 1 là 4 bước như sau:

Thao tác (a): N = N-1 = 17-1 = 16

Thao tác (b): 16 = max(4,4) = 4

Thao tác (b): 4 = max(2,2) = 2

Thao tác (a): 2 = 2-1 = 1

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số N.
Output:

Đưa ra kết quả mỗi test theo từng dòng.*/
#include<bits/stdc++.h>

using namespace std;
#define pa pair<int,int>
#define ll long long
int step(int n ){
    unordered_set<int> visited;
    queue<pa> curr;
    curr.push({n,0});
    while(!curr.empty()){
        pa tmp = curr.front(); 
        int val = tmp.first;
        int cnt = tmp.second;
        curr.pop();
        if(val == 1) return cnt;
        if(visited.find(val - 1) == visited.end() and val - 1 >= 1){
            visited.insert(val-1);
            curr.push({val -1,cnt+1});
        }
        for(int i=2 ; i<=sqrt(val) ; i++ ){
            if(val % i == 0){
                if(visited.find(val/i) == visited.end()){
                    visited.insert(val/i);
                    curr.push({val/i, cnt + 1});
                }
            }
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin >> n;
        cout << step(n) << endl;
    }
    return 0;
    
}
