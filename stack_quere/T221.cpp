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