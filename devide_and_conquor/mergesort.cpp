#include <bits/stdc++.h>
using namespace std;
#define ll long long
void merge(int a[], int l, int r, int m) {
    vector<int> v1(a + l, a + m + 1);  
    vector<int> v2(a + m + 1, a + r + 1); 
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size()) {
        if (v1[i] <= v2[j])
            a[l++] = v1[i++];
        else
            a[l++] = v2[j++];
    }
    while (i < v1.size()) a[l++] = v1[i++];
    while (j < v2.size()) a[l++] = v2[j++];
}
void mergesort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2; 
        mergesort(a, l, m);  
        mergesort(a, m + 1, r);  
        merge(a, l, r, m);  
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int a[100000];
        for(int i = 0 ; i < n ; i++ ) cin>>a[i];
        mergesort(a,0,n-1);
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';   
        }
        cout<<endl;  
    }
    return 0;
}
