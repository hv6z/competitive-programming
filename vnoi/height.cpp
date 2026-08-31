#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int max = 0;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }for(int i = 0; i < n; i++){
        max = a[i];
        if(a[i + 1] > max){
            max = a[i + 1];
        }
        cout << max;
    }

    return 0;
}