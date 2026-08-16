#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n, t;
    long long tong = 1e7; 

    cin >> n >> t;
    if(n >= 3 && n <= 1000 ){
        tong = t * n;
    }
    cout << tong;
    

    return 0;
}