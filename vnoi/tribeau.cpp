#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long m = a, min = b;


    if(a < min) min = a;
    if(c < min) min = c;
    if(b > m) m = b;
    if(c > m) m = c;

    if(m - min <= d){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    


    return 0;
}