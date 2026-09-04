#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;

    while(n--){
        vector<int>a(3);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        if(a[0] + a[1] == a[2]){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}