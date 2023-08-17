/*dao tu */
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        string tmp;
        stringstream ss(s);
        while(ss >> tmp){
            reverse(tmp.begin(),tmp.end());
            cout<<tmp<<' ';
        }
        cout<<endl;
    }
    return 0;
    
}
