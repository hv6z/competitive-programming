#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    double n;
    cin >> n;
    double kq = 0;

    vector<double>a(n);
    for(auto &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        kq += a[i];
    }
    cout << kq / n;

    return 0;
}