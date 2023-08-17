/*Cho dãy ký tự S chỉ bao gồm các ký tự I hoặc D. Ký tự I được hiểu là tăng (Increasing) ký tự D được hiểu là giảm (Decreasing). Sử dụng các số từ 1 đến 9, hãy đưa ra số nhỏ nhất được đoán nhận từ S. Chú ý, các số không được phép lặp lại. Dưới đây là một số ví dụ mẫu:

A[] = “I”               : số tăng nhỏ nhất là 12.
A[] = “D”              : số giảm nhỏ nhất là 21
A[] =”DD”            : số giảm nhỏ nhất là 321
A[] = “DDIDDIID”: số thỏa mãn 321654798
Input: Dòng đầu tiên đưa vào số lượng bộ test T.  Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu S. T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ length(S) ≤8; .

Output: Đưa ra thứ tự bộ test và kết quả mỗi test theo từng dòng.*/
#include <bits/stdc++.h>
using namespace std;
map<int, int> ban;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i; i < n; i++){
        cin >> a[i];
    }
    for (int i; i < n; i++){
        ban[a[i]]++;
    }
    for (int i; i < n; i++){
        if (ban[a[i]] != 0){
            cout << a[i] << ' ' << ban[a[i]]<<endl;
            ban[a[i]] = 0;
        }
    }
}
