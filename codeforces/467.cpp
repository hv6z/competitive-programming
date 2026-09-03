#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;
    int dem = 0;

    while(n--){
        int a, b;
        cin >> a >> b;
        if(b - a >= 2)
            dem++;
    }
    cout << dem;

    return 0;
}