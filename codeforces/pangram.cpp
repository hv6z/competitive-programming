#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dem = 0;

    bool kitu[26] = {};
    for(int i = 0; i < n; i++){
        
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
        int c = s[i] - 'a';
        if(kitu[c] == false){
        kitu[c] = true;
        dem++;
        }
        
    } if(dem == 26){
        cout << "YES";
    }else{
        cout << "NO";
    }

	return 0;
 } 