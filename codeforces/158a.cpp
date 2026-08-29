#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    int dem = 0;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }for(int i = 0 ; i < n; i++){
        if(a[i] >= a[k-1] && a[i] > 0){
            dem++;
        }
    }
    cout << dem;

	return 0;
 } 