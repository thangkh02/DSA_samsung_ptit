#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    /*
    8
    1000
    7
    0111
    */
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i = s.size()-1;
        while(i >=0 && s[i]=='0'){
            s[i] = '1';
            i--;
        }
        if(i >= 0){
            s[i] = '0';
        }
        cout<<s<<endl;
    }
    return 0;
    
}