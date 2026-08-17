#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    int n = s.size();
    cin >> n;
    cin >> s;
    int dem1 = 0, dem2 = 0;

   for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            dem1 += 1;
        }if(s[i] == 'D'){
            dem2 += 1;
        }
    }
        if(dem1 > dem2){
            cout << "Anton";
        }if(dem1 < dem2){
            cout << "Danik";
        }if(dem1 == dem2){
            cout << "Friendship";
        }
        
	return 0;
 } 
