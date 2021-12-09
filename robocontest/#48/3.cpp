#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;

	while(n%10!=0 ){
		n--;
		if(n%10==0){
			n = n / 10 ;
			cout<<n<<" ";
		}	
	}
}
	 