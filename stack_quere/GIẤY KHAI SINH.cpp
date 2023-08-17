/*Một buổi họp mặt đại gia đình nhân dịp cụ già Ted tròn 100 tuổi, người ta muốn sắp xếp con cháu của cụ theo thứ tự từ tuổi cao xuống thấp. Giả sử ta có thông tin về giấy khai sinh của từng người đó. Mỗi giấy khai sinh chỉ viết ba thông tin đơn giản gồm: Tên người cha, Tên người con, Tuổi của người cha lúc sinh con.

Hãy giúp đại gia đình trên tính ra tuổi của từng người con cháu cụ Ted và viết ra danh sách theo thứ tự từ tuổi cao xuống thấp.

Input

Dòng đầu ghi số bộ test (không quá 100). Với mỗi bộ test:

Dòng đầu tiên ghi số X (0<X<100) là số người con cháu cần sắp xếp.
Tiếp theo là X dòng, mỗi dòng ghi thông tin về một giấy khai sinh của từng người (thứ tự ngẫu nhiên) gồm 3 thành phần, mỗi thành phần cách nhau một khoảng trống:
Tên người cha: không quá 20 ký tự và không chứa khoảng trống
Tên người con: không quá 20 ký tự và không chứa khoảng trống
Tuổi của người cha khi sinh con: 1 số nguyên dương, không quá 100.
Output

Với mỗi bộ test, in ra màn hình thứ tự bộ test (xem thêm trong bộ test ví dụ), sau đó lần lượt là từng người trong danh sách tuổi từ cao xuống thấp (không tính cụ Ted). Mỗi người viết ra hai thông tin: tên, một khoảng trống rồi đến tuổi của người đó.
Nếu hai người có cùng tuổi thì xếp theo thứ tự từ điển.*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define family map<string, vector<pair<string, int>>>
#define person vector<pair<string, int>>
vector<pair<string,int>> res;
void bfs(string parent ,family adj ,int age){
    for(auto x : adj[parent]){
       int tmpage = age -  x.second;
       res.push_back({x.first,tmpage});
       bfs(x.first,adj,tmpage);
    }
}
bool cmp(pair<string,int> x , pair<string ,int> y){
    return x.second == y.second and x.first < y.first or y.second < x.second;
}
int main(){
    int t;
    cin>>t;
    for(int i=1 ; i<=t ; i++){
        res.clear();
        cout<<"DATASET "<<i<<endl;
        int n ;
        cin>>n;
        family adj;
        string s1,s2; int age;
        for(int j=0 ; j<n ; j++){
            cin>>s1>>s2>>age;
            adj[s1].push_back({s2,age});
        }
        bfs("Ted",adj,100);
        sort(res.begin(),res.end(),cmp);
        for(auto x : res){
            cout<< x.first<<' '<<x.second<<endl;
        }
    }
    return 0;
    
}
