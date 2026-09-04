#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string s;
    cin >> s;
    int dem = 1;

    bool kq = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1]){
            dem++;
        }else{
            dem = 1;
        }if(dem >= 7){
            kq = true;
            break;
        }else{
            kq = false;
        }
    }
    cout << (kq == true ? "YES" : "NO");
    
    return 0;
}