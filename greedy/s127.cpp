#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    string s;
    cin>>s;
    string ans;
    char tmp = s[s.size() -1 ];
    for(int i = s.size()-1;i>=0;i--){
        tmp = max(tmp,s[i]);
        if(s[i] == tmp) ans+=s[i];
        
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
    
}