#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;string s;
        cin>>k>>s;
        map<char ,int> f;
        for(auto x : s) f[x]++;
        priority_queue<int> q;
        for(auto x : f) q.push(x.second);
        while(k > 0){
            int head = q.top();
            q.pop();
            head--;
            q.push(head);
            k--;
        }
        int valuestr = 0 ;
        while(!q.empty()){
            int x = q.top()*q.top();
            valuestr += x;
            q.pop(); 
        }
        cout<<valuestr<<endl;
    }
    return 0;
    
}