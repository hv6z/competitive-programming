#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;

    vector<int>a(n);

    for(auto &x : a) cin >> x;
    for(auto x : a) cout << x << " ";


    return 0;
}