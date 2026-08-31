#include <bits/stdc++.h>
using namespace std;	
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;

    if(n == 2){
        n = 3;
    }
    cout<<(2*n - 4)<<endl;

    // in ra tu 2 -> n-1
    for(int i = 2; i <= n-1; i++){
        cout << i << " ";
    }
    
    // in ra tu n -1-> 2
    for(int i = n-1; i >=2; i--){
        cout << i << " ";
    }
    
    
    return 0;
}