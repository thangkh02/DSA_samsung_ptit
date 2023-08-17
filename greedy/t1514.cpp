#include <bits/stdc++.h>

using namespace std;
int arr[100000],n,kq;

void countDistinctORs() {
    set<int> distinct_values;
    set<int> current_set;
    for (int i = 0; i < n; ++i) {
        set<int> new_set;
        new_set.insert(arr[i]);
        for (int val : current_set) {
            new_set.insert(val | arr[i]);
        }
        current_set = new_set;
        distinct_values.insert(current_set.begin(), current_set.end());
    }
    kq = distinct_values.size();
}
  
int main() {
    cin >> n;
    for (int i = 0; i < n ; i++) cin >> arr[i];
    countDistinctORs();
    cout << kq << endl;
}