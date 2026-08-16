#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a,b;
    getline(cin, a);
    getline(cin, b);

    if(a.size() > b.size()){
        cout << "No";
        return 0;
    }

    bool ok = true;
    for(int i = 0; i < (int) a.size(); i++){
        if(a[i] != b[i]){
            ok = false;
            break;
        }
    }

    cout << (ok ? "Yes" : "No"); 


    return 0;
}