#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define f first 
#define s second

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int> p[n];
        for(int i=0;i<n;i++){
            cin>>p[i].f>>p[i].s;
        }
        sort(p,p+n,[](pair<int,int> x,pair<int,int> y)->bool{
            return x.s < y.s;
        });
        int cnt = 1,tmp = p[0].s;
        for(int i=0;i<n;i++){
            if(p[i].f >= tmp ){
                cnt++;
                tmp = p[i].s;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
    
}