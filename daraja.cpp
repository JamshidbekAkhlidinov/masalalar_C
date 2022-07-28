#include <iostream>
using namespace std;


int daraja(int n){
	int s=1;
	int d = 2;
	for(int i=1; i<=n; i++){
		s*=d;
	}
	return s;
}

int main(){
	int n;
	cin>>n;
	cout<<daraja(n);
}