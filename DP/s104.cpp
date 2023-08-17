/*
DÃY SỐ BI-TONIC

Bài làm tốt nhất
Một dãy số được gọi là Bi-tonic nếu nó được chia thành hai dãy đầu tăng dần và dãy tiếp theo giảm dần. Nhiệm vụ của bạn là tìm tổng lớn nhất dãy con Bi-tonic của dãy số A[]. Ví dụ với dãy A[] = {1, 15, 51, 45, 33, 100, 12, 18, 9} ta có kết quả là 194 tương ứng với dãy Bi-tonic {1, 15, 51, 100, 18, 9}.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số phần tử của dãy A[]; dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤100; 0≤A[i] ≤100.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> a(n);
        int f1[100000],f2[100000];
        for(int i=0;i<n;i++){
            cin>>a[i];
            f1[i] = a[i],f2[i] = a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[j]<a[i]){
                    f1[i]=max(f1[i],f1[j] + a[i]);
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>i;j--){
                if(a[i] > a[j]){
                    f2[i] = max (f2[i],f2[j]+a[i]);
                }
            }
        }
        int ans[100000];
        for(int i=0;i<n;i++){
            ans[i] = f1[i]+f2[i]-a[i];
        }
        cout<<*max_element(ans,ans+n)<<endl;
    }
    return 0;
    
}