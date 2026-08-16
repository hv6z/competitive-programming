#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int vt1;
	int vt2,vt3, tong;
    cin >> n;
    
    vt1 = n / 100;
    vt2 = (n % 100) / 10; 
    vt3 = (n % 100) % 10; 
	tong = vt1 + vt2 + vt3;
	
	cout << tong;
    
    return 0;
}