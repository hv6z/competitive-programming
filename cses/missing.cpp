#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   int n;
   cin >> n;    
   int tong = 0;

   int a[n];

   for(int i = 0; i <= n; i++){
       tong += i;
   }
   for(int i = 0; i < n - 1; i++){
       cin >> a[i];
       tong -= a[i];
   }
   
   cout << tong;
   
	return 0;
 } 