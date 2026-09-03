#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long long n;
    cin >> n;
    int d1 = 0;
    int d2 = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            d1 += i;
        }else{
            d2 += i;
        }
    }
    cout << (n % 2 == 0 ? d2 - d1: d1 - d2);

    return 0;
}