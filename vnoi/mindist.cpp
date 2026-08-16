#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    /*
	a[0].... a[n]; 
	n = 5; 
	a0 = 2 , a1= 3, a2 = 4, a3 = 5 | i < n
	i = 0 , a[i] = 2 
	*/ 
	0 1 2 3 4 
	i 

	n = 3

	0<n 
	a1 = 2
	1< 3
	a2 = 3 
	2 < 3
	a3 = 5
	
	2 3 5



    int a[n]; 
    for(int i = 0; i < n; i++){
    	cin >> a[i];
	}

	int max = 10000000;
	for(int i = 0; i< n-1; i++)
	{
	
//		for (j=n-1; j>i; j --)
		for(int j = i + 1 ; j < n; j ++)
	{
  		if(a[i] == a[j]){

  			if(j-i < max) {

  				max = j - i; 
			  }
		  }
	}
	//cout<<max;
	}
	 if( max == 10000000){
	 	cout<<-1;
	 }	else{cout << max;
}
    return 0;
}