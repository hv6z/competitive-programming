#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int n;
    string s;
    int dem = 0;

    for(int i = 0; i < t; i++){
        cin >> n;
        cin >> s;
    }for(int i = 0; i < n; i++){
        if(s == "#"){
            dem+=1;
        }if( s == "*"){
                dem = 1;
            }
    }
    cout << dem;
	return 0;
 } 