#include <iostream>
using namespace std;


void daraja(int n){
	int s=1;
	int d = 2;
	for(int i=1; i<=n; i++){
		s*=d;
	}
	cout<<s;
}

int main(){
	int n;
	cin>>n;
	daraja(n);
}