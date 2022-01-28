#include <iostream>

using namespace std;

int main(){
	long int n;
	cin>>n;
	long int k1=0,k2=0,k3=0,k4=0;
	int i=0;	
		while(n>=10){
			k1 = n / 10;
			n = n % 10;
		}
		while(n>=5){
			k2 = n / 5;
			n = n % 5;
		}
		while(n>=3){
			k3 = n / 3;
			n = n % 3;
		}
		
		cout<<k1<<" ta 10 \n"<<k2<<" ta 5 \n"<<k3<<" ta 3 \n"<<n<<" ta 1";
		
				
	
}