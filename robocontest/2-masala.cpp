#include <iostream>

using namespace std;

int main(){
	long int n;
	cin>>n;
	long int k1=0,k2=0,k3=0,k4=0;
	int i=0;	
		while(n>=100){
			k1 = n / 100;
			n = n % 100;
		}
		while(n>=20){
			k2 = n / 20;
			n = n % 20;
		}
		while(n>=10){
			k3 = n / 10;
			n = n % 10;
		}
		while(n>=5){
			k4 = n /5;
			n = n % 5;
		}
		
		
		cout<<k1+k2+k3+k4+n;		
		
				
	
}