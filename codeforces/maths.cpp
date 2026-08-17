#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int tam = 0;

    int n = s.size();
    for(int i = 0; i < n; i+=2){     
        for(int j = n - 1; j > i; j-=2){ 
            if(s[j] < s[j - 2]){
                tam = s[j];
                s[j] = s[j -2];
                s[j - 2] = tam;
            }
        }
        
       
    }
    cout << s;

	return 0;
 } 