#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int dem = 1;
    int max = 1;

    int n = s.size();
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            dem = dem + 1;
            if(dem > max){
                max = dem;
            }
        }else if(s[i] != s[i-1]){
            dem = 1;
        }
    }
    cout << max;

   
    
	return 0;
 } 
    