#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int dem = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i]== s[i+1]){
            dem++;
        }
    }
    cout << dem;

    return 0;
}