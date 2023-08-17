#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007;
ll binpow(ll n, ll k) {
    if (k == 0)
        return 1;
    ll tmp = binpow(n, k / 2);
    if (k % 2)
        return ((((tmp % mod) * (tmp % mod)) % mod) * (n % mod)) % mod;
    else
        return ((tmp % mod) * (tmp % mod)) % mod;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        cout<<binpow(n,k)<<endl;
    }
    return 0;
    
}