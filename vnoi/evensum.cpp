#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,x,y;
    int v, but;
	cin >> a >> b >> x >> y;
	
	v = a * x;
	but = b * y;
	
    cout << v + but;
    
    return 0;
}