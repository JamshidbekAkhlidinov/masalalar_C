#include <iostream>
#include "max.h";
using namespace std;

int main(){
	int n;
	int a,s;
	cout<<"n = ";
	cin>>n;
	for (int i=1; i<=n; i++){
		cout<<"a"<<i<<" = ";
		cin>>a;
		s  = s + a;
	}
	cout<<"s="<<s;
}