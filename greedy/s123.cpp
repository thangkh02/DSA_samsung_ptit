#include<bits/stdc++.h>

using namespace std;
#define tmp pair<int,int> g1=g,l1=l,r1=r,b1=b;
#define ll long long
#define s second
#define f first
pair<int,int> g={0,1},l={-1,0},r={1,0},b={0,-1};
pair<int,int> robot={0,0};
void left(){
    robot.f+=l.f;robot.s+=l.s;
    tmp;
    g=l1,l=b1,r=g1,b=r1;
}
void right(){
    robot.f+=r.f;robot.s+=r.s;
    tmp;
    g=r1,l=g1,r=b1,b=l1;
}
void down(){
    robot.f+=b.f;robot.s+=b.s;
    tmp;
    swap(g,b);swap(r,l);
}
void up(){
    robot.f+=g.f;robot.s+=g.s;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        char O;
        cin>>O;
        switch (O){
            case 'L':
            left();
            break;
            case 'B':
            down();
            break;
            case 'R':
            right();
            break;
            case 'G':
            up();
            break;
        }
    }
    cout<<robot.f<<' '<<robot.s<<endl;
    return 0;
}