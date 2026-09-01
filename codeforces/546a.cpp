#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int k, n, w;
    cin >> k >> n >> w;
    int sum = 0;

    for(int i = 1; i <= w; i++){
        sum += i*k;
    }
    cout << max(0, sum - n);
    
    return 0;
}