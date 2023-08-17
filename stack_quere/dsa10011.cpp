/* sinh xâu nhị phân từ 1 đến n  */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while (t--){
        int n ;
        cin>>n;
        vector<string> res;
        res.push_back("1");
        queue<string> q;
        q.push("1");
        while (res.size() < n){
            string u = q.front();q.pop();
            res.push_back(u+'0');
            res.push_back(u+'1');
            q.push(u+'0');
            q.push(u+'1');
        }
        for(int i=0;i<n;i++){
            cout<<res[i]<<' ';  
        }
        cout<<endl;
    }
    return 0;
}