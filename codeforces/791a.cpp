#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    int nam = 0;
    for( ; a <= b ;  nam++){
        a = a * 3;
        b = b * 2;
    }
    cout << nam;


    return 0;
}