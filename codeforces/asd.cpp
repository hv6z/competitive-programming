#include <bits/stdc++.h>
using namespace std;	
int t,n, a[2][2];
string s[2];
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);

  cin>>t;
  while(t--){
    memset(a, 0, sizeof(a));
    cin>>n>>s[0]>>s[1];
    for(int j=0;j<2;j++)
      for(int i=0; i<n; i++)
        a[j][i%2]+=(s[j][i]=='0');
    
    if(a[0][0]==a[1][0] && a[0][1]==a[1][1]){
        long long int ans=0;
        for(int i=0,j=0; i<n; i+=2){
            if(s[1][i] == '0'){
                while(s[0][j] != '0') j+=2;
                ans += ((long long int)abs(i-j))/2;
                j+=2;
            }
        }
        for(int i=1,j=1; i<n; i+=2){
            if(s[1][i] == '0'){
                while(s[0][j] != '0') j+=2;
                ans += ((long long int)abs(i-j))/2;
                j+=2;
            }
        }
        cout<< ans << "\n";
    }else{
        cout<<"-1\n";
    }
  }


  return 0;
}