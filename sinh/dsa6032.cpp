
#include<bits/stdc++.h>
using namespace std;
int countTripletsLessThanK(vector<int> &a, int k){
    sort(a.begin(), a.end());
    int count = 0;
    for (int i = 0; i < a.size() - 2; i++){
        int left = i + 1;
        int right = a.size() - 1;
        while (left < right){
            if (a[i] + a[left] + a[right] < k){
                count += right - left;
                left++;
            }
            else{
                right--;
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin >> n >>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        cin >> a[i];
        int result = countTripletsLessThanK(a, k);
        cout << result << endl;
    }
    return 0;
}
