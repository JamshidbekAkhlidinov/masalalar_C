	#include <iostream>
	#include <cmath>
	using namespace std;
	int main(){
		int n;
		cin>>n;
		int a[n+1],b[n+1];
		for(int i=1; i<=n; i++){
			if(i==0){
				a[i] = 1;
				b[i] = 0;
			} else{
				a[i] = 3*a[i-1]+b[i-1];
				b[i] = 3*b[i-1]+a[i-1];
			}
		}
		
		cout<<a[n];
	}