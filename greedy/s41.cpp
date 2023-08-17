#include <bits/stdc++.h>

using namespace std;

#define ll long long
const ll mod = 1e9+7;
void solve(){
    ll n,x;
    cin >> n;
    priority_queue<ll,vector<ll>,greater<ll>> q;
    for (int i = 0; i < n; i++){
        cin>>x;
        q.push(x);
    }
    ll ans = 0; 
    while(q.size() > 1){
        ll t1 = q.top();q.pop();
        ll t2 = q.top();q.pop();
        ll tmp = (t1 + t2) % mod;
        q.push(tmp);
        ans+= tmp;
        ans%=mod;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}