#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long long int n, m, a;
    cin >> n >> m >> a;

    long long int k1,k2;

    k1 = m/a;
    if(m%a > 0)
        k1 = (m/a) + 1;
    
    k2 = n/a;
    if(n%a > 0)
        k2 = (n/a) + 1;

    long long int kq = k1 * k2;
    cout << kq;
 

    return 0;
}