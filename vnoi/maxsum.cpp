#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
        tìm và tổng dãy con S là các phần tử liên tiếp lớn nhất
        vd1: 3 
            [1 -3 3] = 3 
            -> vì 1 + (-3) và (-3) + 3 và 1 không lớn hơn 3
           vd2: 5 
            [1 2 3 4 5]
            kq: 15
            -> tổng nguyên mảng = 15
            5
            [1 1] -3 1 1
            kq: 2
    */
    int n;
    long long max;
    long long tong= 0;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    max = a[0];
    

    for(int x=0; x<n; x++){
        for(int y=x; y<n; y++){
            tong = 0;
            for(int i=x; i<=y; i++){
                tong+=a[i];
            }
            max = (tong>max)? tong : max;
        }
    }
    cout << max;

    return 0;
}