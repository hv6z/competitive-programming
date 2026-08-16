#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin >> a >> b;

    if(a != b && a < b){
        cout << "0";
    }if (a != b && a > b){
        cout << "1";
    }

    return 0;
}