#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i = s.size()-1;
        while(s[i] == '1' && i >= 0){
            s[i] = '0';
            i--;
        }
        if(i < 0)
           cout<<s<<endl; // s = string(s.size(),'0');
        else{
            s[i] = '1';
            cout<<s<<endl;
        }
        
    }
    return 0;
    
}