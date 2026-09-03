#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int dem = 0;

    vector<int>a(n);
    for(auto &x : a) cin >> x;
    // int a[n];
    // for(int i = 0; i < n; i++){
    //     cin >> a[i];
    // }

    for(int i = 0; i < n; i++){
        if(a[i] != a[i+1]){
            dem += 1;
        }

    }
    cout << dem;
    

    return 0;
}