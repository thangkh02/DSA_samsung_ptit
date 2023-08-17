#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int d;string s;
        cin>>d>>s;
        map<char ,int> f;
        for(char x : s) f[x]++;
        int res = 0;
        for(int i = 0;i<256;i++) res = max(res,f[i]);
        if( s.size() % 2 && s.size() - res == (d-1)*res - 1 ) cout<<"1\n";
        else if( s.size() % 2 == 0 && s.size() - res == (d-1)*res ) cout<<"1\n";
        else  cout<<"-1\n";
    }
    return 0;
    
}