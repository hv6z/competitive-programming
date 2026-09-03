#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int a[5][5];
    int kq = 0;
    
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            cin >> a[x][y];
            if(a[x][y] == 1){
                kq = abs(x - 2) + abs(y - 2);
                break;
            }
        }
    }
    cout << kq;

    return 0;
}