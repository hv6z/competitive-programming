#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   	int n;
    int tong = 0;
    cin >> n;

    // s = ( 2 + 3 + 4 +... + n) + 2*n
    int a[n];
    for(int i = 0; i <= n; i++){
        tong += a[i]+ 2*n;
    }
    cout << tong; 

    return 0;
}