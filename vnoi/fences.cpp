#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    long long m ;
   	long long n ;

    cin >> m; 
    cin >> n;

    int t = (m + 1) * n + (n + 1) * m;
    cout << t;

    

    return 0;
}