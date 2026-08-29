#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string k, n, t;
    cin >> k >> n >> t;

    int kitu[26] = {};
    for(int i = 0; i <= k.size(); i++){
        int c = k[i] - 'A';
        kitu[c]++;
    }for(int i = 0 ; i < n.size(); i++){
        int c = n[i] - 'A';
        kitu[c]++;
    }for(int i = 0; i < t.size(); i++){
        int c =t[i] - 'A';
        kitu[c]--;
    }  
    for(int i = 0; i < 26; i++){
        if(kitu[i] != 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";


	return 0;
 } 