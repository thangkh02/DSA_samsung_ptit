/*Trong giấc mơ, Tí thấy mình bị lạc trên hòn đảo với cư dân xa lạ. Không biết làm việc gì, Tí đành phải hái dừa đem bán. Tí muốn làm một tấm biến cho quán hàng cửa mình. Lục tung khắp nơi, Tí kiếm được N miếng gỗ hình chữ nhật, mỗi miếng có chiều dài bằng A[i] và chiều rộng bằng 1. Tí đã ghép N miếng gỗ thành một tấm ván lớn, rồi thực hiện cắt các miếng gỗ để thu được tấm biển.

Tí muốn tấm biển quảng cáo của mình thật đặc biệt, nên Tí đã chọn nhất định nó sẽ là hình vuông. Không có eke, thước, dây, … nên Tí phải dựa vào các miếng gỗ ban đầu để căn nhát cưa. Việc cưa theo chiều dọc rất dễ dàng, nhưng theo chiều ngang, Tí chỉ có thể cưa theo một đường thẳng trùng với một cạnh của miếng gỗ nào đó.

Các bạn hãy giúp Tí tính thử xem tấm biển quảng cáo của Tí có kích thước lớn nhất bằng bao nhiêu (kích thước ở đây là độ dài cạnh hình vuông).
Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test bắt đầu bởi số nguyên N (N ≤ 100 000). Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 109).

Output:   Với mỗi test, in ra chiều dài cạnh của tấm biển. Nếu Tí không thể tạo thành tấm biển, in ra 0.

Input:
4
7
5 2 4 3 3 1 4
3
2 2 2
2
6 6
6
5 5 5 5 3 1
Output
3
2
0
3
*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
int dl[1000000];
int dr[1000000];
void minr(int a[],int n){
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while( !st.empty() and a[st.top()] > a[i] ){
            dr[st.top()] = i; 
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        dr[st.top()] = n;
        st.pop();
    }
}
void minl(int a[],int n){
    stack<int> st;
    st.push(n-1);
    for(int i= n-2 ; i>=0 ; i-- ){
        while( !st.empty() and a[st.top()] > a[i] ){
            dl[st.top()] = i; 
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        dl[st.top()] = -1;
        st.pop();
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(dr,0,sizeof(dl));
        memset(dr,0,sizeof(dr));
        int n;
        cin>>n;
        int a[100003];
        for(int i=0 ; i<n ; i++) cin>>a[i];
        minr(a,n);
        minl(a,n);
        ll res = 0;
        for(int i=0 ; i<n ; i++){
            ll w = 1ll * (dr[i] - dl[i] -1);
            if(w == a[i]) res = max(res,w);
            if(w > a[i])  res = max(res,1ll*a[i]);
        }
        cout<<res<<endl;
    }
    return 0;
    
}
