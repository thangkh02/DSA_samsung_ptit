#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    string s;
    cin>>s;
    long A=0,B=0;
    for(long i=0;i<s.size();i++)
    {
        if(s[i]=='A') B=1+min(A,B);
        else   A=1+min(A,B);
    }
    cout<<A;
    return 0;
    
}
