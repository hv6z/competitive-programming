#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s >> t;
    
    int n1 = t.size();
    int n2 = s.size();
    bool kq = true;
     if(n1 != n2 ){
        kq = false;
     }else{
    for(int i = 0, j = n2 -1 ; i < n1; i++, j--){
        if(s[j] != t[i]){
            kq = false;
            break;
        }
    }
}
    if(kq){
        cout << "YES";
    }else{
        cout << "NO";
    }

	return 0;
 } 
