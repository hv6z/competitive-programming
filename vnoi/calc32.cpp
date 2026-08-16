#include <iostream>
using namespace std;
bool solv(int a[]){
	bool f = false;
	if((a[0] + a[1] -a[2] == 0)||(a[0] + a[2] - a[1] == 0)||(a[1] + a[0] -a[2] == 0)||(a[1] + a[2] - a[0] == 0)||(a[2] + a[1] -a[0] == 0)||(a[2] + a[0] - a[1] == 0)) f = true;
	return f;

}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	
	if(solv(a)) cout<<"yes"<<endl;
	else cout<<"no"<<endl; 
	
	cin>>a[0]>>a[1]>>a[2];
	if(solv(a)) cout<<"yes";
	else cout<<"no"; 
	
	return 0;
}
