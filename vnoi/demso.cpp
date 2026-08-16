#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n = 1e5;
    cin >> n;
    long long int sa = 0, sd = 0;


    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }for(int i = 0; i < n; i++){
        if(a[i] < 0){
            sa = i + 1;
        }if(a[i] > 0){
            sd = (i+ 1) - sa;
        }
    }

    cout << sa << " " << sd;
    return 0;
}