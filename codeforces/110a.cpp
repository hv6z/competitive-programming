#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string n;
    cin >> n;
    int dem = 0;

    for(int i = 0; i < (int)n.size(); i++ ){
        if(n[i] == '4' || n[i] == '7'){
            dem++;
        }
    }
    cout << ((dem == 4 || dem == 7) ? "YES" : "NO");
  

    return 0;
}