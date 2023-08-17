#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        map<int,int> mark;
        int min = 1e9, max = 0,ans = 0;
        for(int x : a){
            mark[x] = 1;
            max = ::max (x,max);
            min = ::min(min,x);
        }
        for(int i=min;i<=max;i++) if(mark[i] == 0) ans++;
        cout<<ans<<endl;
    }
    return 0;
    
}