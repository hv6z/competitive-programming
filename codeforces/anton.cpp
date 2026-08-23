#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    string s;
    int tong = 0;

    for(int i = 0; i < n; i++){
        cin >> s;
        
        if(s == "Tetrahedron") tong += 4;
        else if(s == "Cube") tong += 6;
        else if(s == "Octahedron") tong += 8;
        else if(s == "Dodecahedron") tong += 12;
        else if(s == "Icosahedron") tong += 20;
    }
    cout << tong;

    


	return 0;
 } 