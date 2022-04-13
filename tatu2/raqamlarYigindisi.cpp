#include <iostream>
using namespace std;

int main(){

	int k,s=0,i=0;
	cin>>k;
	
	while(k>0){
		i++;
		s += k%10;
		k = k/10;
	}
	
	cout<<i<<" "<<s;

	
}