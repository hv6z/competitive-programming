#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, h;
    cin >> n >> h;
    vector<int>a(n);
    int dem = 0;

    for(auto &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        if(a[i] <= h){
            dem++;    
        }else{
            dem += 2;
        }
    }
    cout << dem;


    return 0;
}