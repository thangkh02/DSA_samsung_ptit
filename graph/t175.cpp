/* danh sách kề sang danh sách kề */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp){
            int x = stoi(tmp);
            if (x > i)
                cout << i << ' ' << x << endl;
        }
    }
    return 0;
}