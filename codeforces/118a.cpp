#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string s;
    cin >> s;

    for(char& c: s){
        if(c < 'a')
            c+= 32;
        if(c == 'a' || c == 'o' || c == 'y' || c == 'e' ||
           c == 'u' || c == 'i' ){
           }else{
            cout << '.' << c;
           }
    }
    return 0;
}