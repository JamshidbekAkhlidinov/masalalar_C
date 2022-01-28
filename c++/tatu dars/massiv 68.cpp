#include <iostream>
#include <cmath>
using namespace std;
int fac(int n){
	int s=1;
	for(int k=1; k<=n; k++){
		s*=k;
		return s;
	}
}
int main(){
	double s=0,x;
	int n;
	cout<<"n="; cin>>n;
	cout<<"x="; cin>>x;
	for(int i=1;i<=n; i++){
		s=s+pow(x,2*i-1)/fac(2*i-1);
	}
	cout<<"S="<<s;
}