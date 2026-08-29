#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    char s[3];
    int dem = 0;

    for(int i = 0; i < n; i++){
        cin >> s[0] >> s[1] >> s[2];
        if(s[0] == '1' && s[1] == '1' 
            || s[0] == '1' && s[2] == '1'
            || s[1] == '1' && s[2] == '1'){
            dem ++;
        }
        
    }
    cout << dem;

	return 0;
 } 