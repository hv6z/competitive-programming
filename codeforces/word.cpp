#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int dem1= 0, dem2 = 0;
    
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            dem1 += 1;
        }if(s[i] >= 'A' && s[i] <= 'Z'){
            dem2 += 1;
        }
    }for(int i = 0; i < n; i++){
        if(dem1 >= dem2){
            if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
            }else if(dem1 < dem2){
                if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32; 
            }
        }
    }
     cout << s;
        
	return 0;
 }  