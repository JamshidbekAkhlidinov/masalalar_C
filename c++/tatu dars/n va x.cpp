#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double s=0,x;
	int n;
	cout<<"n="; cin>>n;
	cout<<"x="; cin>>x;
	for(int i=1;i<=n; i++){
		s+=(pow(-1,i-1)*pow(x,i))/i;
	}
	cout<<"S="<<s;
}