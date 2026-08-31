#include <bits/stdc++.h>

using namespace std;

int solve(){

    int n;
    string s;
    cin >> n >> s;
    int dem = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 'H'){
            dem++;
        }
    }
    if(dem % 2 == 0){
        cout << "NO\n";
        return 0;
    }else{
        cout << "YES\n";
    }

    for(int i = 0; i < n; i++){
        if(s[i] == 'H'){
            cout << i + 1 << " ";
            s[i] = ' ';
            if(i != 0){
                if(s[i-1] == 'H'){
                    s[i-1] = 'T';
                }else if(s[i - 1] == 'T'){
                    s[i-1] ='H';
                }
            }
            if(i != n-1){
                if(s[i+1] == 'H' ){
                    s[i+1] = 'T';
                }else if(s[i + 1] == 'T'){
                    s[i+1] ='H';
                }
            }
            i=-1; 
        }
    }



    cout << endl;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
	return 0;
 } 