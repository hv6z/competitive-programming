#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   /*-phần tử sắp xếp tăng dần
    - độ đẹp = khoảng cách lớn nhất giữa 2ptu liên tiếp

    -> đề yêu cầu xóa một phần tử bất kỳ để độ đẹp lớn nhất
    vd: 1 2 3 6
    xóa 2 -> từ 1 cách 3 = 2  -> ko xóa 
    xóa 3 -> từ 2 cách 6 = 4 -> hợp lệ 

    suy ra dãy sau khi xóa là [1, 2, 6] -> độ đẹp = 4*/

   /* tinh tay
    4
    2 4 5 6 
    đo khoảng cách từng phần tử
    -> a[0] -- a[2] = 3     //  2 đo 5 = 3
    -> a[1] -- a[3] = 2      // 4 đo 6 = 2

    ----- 3 2 
    max = 2 
    2 < 3 ; max = 3
    -> kq = 3*/

    int n;
    int dodep;

    int max = 0;

   
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }for(int i = 0; i + 2 < n; i++){
        dodep = a[i+2] - a[i] ;
        if(dodep > max){
            max = dodep;
        }
        
    }
    cout << max;


    return 0;
}