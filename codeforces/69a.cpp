#include <bits/stdc++.h>
using namespace std;	
#define xi a[i][0]
#define yi a[i][1]
#define zi a[i][2]

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;
    int a[n][3]; 
    int t[3]={0};
    
    for(int i = 0 ; i < n; i++){
        cin >> xi >> yi >> zi;
    }
    for(int i = 0; i < n; i++){
        t[0] += xi;
        t[1] += yi;
        t[2] += zi;
    }
    if(t[0]||t[1]||t[2]){ 
        cout << "NO";
    }else{
    cout << "YES";
    }
    return 0;
}