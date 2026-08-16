#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int dem = 1;
    /* 
        kí tự khác nhau chẵn => chat with her
                        lẻ   => ignore him!
        s[i] % 2 == 0 => her
        s[i] % 2 != 0 => him
    */
    int n = s.size();
    for(int i = 1; i < n; i++){
        bool trung = false;
        for(int j = 0; j < i; j++){
        if(s[j] == s[i]){
            trung = true;
        }
    }
    if(trung == false){
            dem++;
        }
}
    if(dem % 2 == 0){
        cout << "CHAT WITH HER!";
    }else if(dem % 2 != 0){
        cout << "IGNORE HIM!";
    }


	return 0;
 } 
