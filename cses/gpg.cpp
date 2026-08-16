#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int g, p, s, giay;
    cin >> g >> p >> s >> giay;

    if(giay >= 60){
        p += giay / 60;
        giay = giay % 60;
    }
    if(p >= 60){
        g += p / 60;
        p = p % 60;
    }
    if(g >= 24){
        g = g % 24;
    }
    

    cout << g << " " << p << " " << s;


	return 0;
 } 