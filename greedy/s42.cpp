#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> res;
        for(int i=0;i<n-k+1;i++){
            int x = *max_element(a+i,a+i+k);
            res.push_back(x);
        }
        for(auto x : res) cout<<x<<' ';
        cout<<endl;
    }
    return 0;
    
}