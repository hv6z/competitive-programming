#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int max = 0;
    int vtri = 0;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > max){
            max = a[i];
            vtri = i;
        }
    }

    cout << vtri + 1;

	return 0;
 } 