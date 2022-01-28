#include <iostream>
using namespace std;
int main(){
	long int n,u;
	cin>>n;u=n;
	long int k1=0,k2=0,k3=0,k4=0;
	int i=0,t=0;	
		while(n>=10){
			k1 = n / 10;
			n = n % 10;
		}
		while(n>=5){
			k2 = n /5;
			n = n % 5;
		}
		while(n>=2){
			k3 = n /2;
			n = n % 2;
		}
		
		
		cout<<t;		
		
				
	
}