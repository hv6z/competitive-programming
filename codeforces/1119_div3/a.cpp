#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    
    int t, n, k;
    cin >> t;
    string s;

    while(t--){
        cin >> n >> k;
        int stt = n / k;
        int dem = 0;
        cin >> s;
        bool kq = false;
        int dchi;
        
        for(int j = 0; j < stt; j++ ){
            kq = false;
            for(int i = 0; i < k; i++){
                dchi = k * j + i;
                if(s[dchi] == '0'){
                    kq = true;
                }
            }
            if(kq == true){
                dem++;
            }

        }
        cout << stt - dem << endl;
    }

    
    

    return 0;
}