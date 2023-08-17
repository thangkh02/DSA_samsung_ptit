/*PHẦN TỬ BÊN PHẢI NHỎ HƠN
Cho mảng A[] gồm n phần tử. Hãy đưa ra các phần tử nhỏ hơn tiếp theo của phần tử lớn hơn đầu tiên phần tử hiện tại. Nếu phần tử hiện tại không có phần tử lớn hơn tiếp theo ta xem là -1. Nếu phần tử không có phần tử nhỏ hơn tiếp theo ta cũng xem là -1. Ví dụ với mảng A[] = {5, 1, 9, 2, 5, 1, 7} ta có kết quả là ans = {2, 2, -1, 1, -1, -1, -1} vì:

Next Greater               Right Smaller

5 ->  9                     9  ->  2

1 ->  9                     9  ->  2

9 -> -1                    -1 -> -1

2 -> 5                      5   -> 1

5 -> 7                      7  -> -1

1 ->  7                     7 -> -1

7 -> -1                     7 -> -1

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n là số phần tử của mảng A[], dòng tiếp theo đưa vào n số A[i].
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:

T, n, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤n, A[i] ≤106.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[100005];
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        stack<int> st;
        pair<int, int> greater[100005];
        for(int i = 0; i < n; i++) greater[i] = make_pair(-1, -1);
        for(int i = 0; i < n; i++) {
            while(!st.empty() and arr[st.top()] < arr[i]) {
                greater[st.top()].second = arr[i];
                greater[st.top()].first = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) {
            greater[st.top()].second = -1;
            st.pop();
        }
        
        int ans[100005];
        for(int i = 0; i < n; i++) {
            ans[i] = -1; 
            if(greater[i].second != -1) {
                for(int j = greater[i].first + 1; j < n; j++) {
                    if(arr[j] < greater[i].second) {
                        ans[i] = arr[j];
                        break;
                    }
                }
            }
        }
        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
