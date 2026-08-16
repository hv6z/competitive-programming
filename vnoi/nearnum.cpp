#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, s1, s2, s3, s4;
    int max = 0;
    cin >> n;
    
    s1 = n / 1000;
    s2 = (n / 100) % 10;    
    s3 = (n / 10) % 10;
    s4 = n % 10;
    
    max = s1; 
    if (s2 > max) max = s2;
    if (s3 > max) max = s3;
    if (s4 > max) max = s4;

    cout << max;


    return 0;
}