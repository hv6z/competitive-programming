#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    int tam = 0;

    for(int i = 0; i < s1.size(); i++){
        if(s1[i] >= 'A' && s1[i] <= 'Z'){
            s1[i] += 32;
        }if(s2[i] >= 'A' && s2[i] <= 'Z'){
            s2[i] += 32;
        }
        if(s1[i] > s2[i]){
            tam = 1;
            break;
        }else if(s1[i] < s2[i]){
            tam = -1;
            break;
        }
    }
    cout << tam;

    
    return 0;
}