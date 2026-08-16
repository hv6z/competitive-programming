#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, C;
    long long tong = 0;
    cin >> N >> C;
    int a[N];

    // tong = a[0] + a[1] + a[2] + a[3] + ... a[n]
    // tong = C - > YES
    // tong < C -> NO
    // tong > C -> YES
    for(int i = 0; i < N; i++){
        cin >> a[i];
        tong += a[i];
        // a[i]+= tong;
    }if(tong == C || tong >= C){
        cout << "YES";
    }if(tong < C){
        cout << "NO";
    }
    

    return 0;
}