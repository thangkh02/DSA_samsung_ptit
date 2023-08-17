#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin>>n;
        int d4=-1,d7;
        for(d7 = n/7 ; d7 >=0;d7--){
            if((n-d7*7) % 4 == 0){
                d4 = (n-d7*7)/4;
                break;
            }
        }
        if(d4 !=-1){
            for(int i=0;i<d4;i++) cout<<4;
            for(int i=0;i<d7;i++) cout<<7;
        }else cout<<-1;
        cout<<endl;
    }
    return 0;
}
