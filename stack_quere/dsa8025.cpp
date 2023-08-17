/*Cho một quân mã trên bàn cờ vua tại vị trí ST. Nhiệm vụ của bạn là hãy tìm số bước di chuyển ít nhất để đưa quân mã tới vị trí EN.



Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 2 xâu dạng “xy” và “uv”, trong đó x, y là kí tự trong “abcdefgh” còn y, v là số thuộc 1, 2, 3, 4, 5, 6, 7, 8.

Output: 

Với mỗi test, in ra đáp án tìm được trên một dòng.*/
#include<bits/stdc++.h>

using namespace std;
int convert(char x){
    return x - 'A' + 1;
}
#define ll long long
#define current pair<int,pair<int,int>>
#define valid i >= 1 and i <=8 and j >=1 and j <= 8 and !visited[i][j]
int dx[] = {2, 1, 2, 1, -2, -1, -2, -1};
int dy[] = {1, 2, -1, -2, 1, 2, -1, -2};
bool visited[10][10];
int path(int u1 ,int u2,int t1,int t2){
    memset(visited,false,sizeof(visited));
    queue<current> q;
    q.push({u1,{u2,0}});
    visited[u1][u2] = true;
    while(!q.empty()){
        current tmp = q.front();
        q.pop();
        int i1 = tmp.first;
        int j1 = tmp.second.first;
        int step = tmp.second.second;
        if(i1 == t1 and j1 == t2 ) return step;
        for(int k=0 ; k<8 ; k++){
            int i = i1 + dx[k],j = j1 + dy[k];
            if(valid){
                q.push({i,{j,step + 1}});
                visited[i][j] = true;
            }
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1 ,s2;
        cin>>s1>>s2;
        int u1 = s1[1] -'0';
        int u2 = s1[0] -'a'+1;
        int v1 = s2[1] -'0';
        int v2 = s2[0] - 'a' +1;
        cout<<path(u1,u2,v1,v2)<<endl;
    }
    return 0;
    
}