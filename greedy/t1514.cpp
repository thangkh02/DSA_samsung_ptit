/*

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define set unordered_set
int solve(int a[],int n ){
	set<int> res,crr;
	for(int i= 0 ; i<n ; i++){
		set<int> tmp;
		for(auto x : crr) tmp.insert(a[i] | x);
		tmp.insert(a[i]);
		for(auto x : tmp) res.insert(x);
		crr = tmp;
	}
	return res.size();
}
int main(){
	int n ;
	cin >> n;
	int a[n];
	for(auto &x : a) cin >> x ;
	cout << solve(a,n) << endl;
}
