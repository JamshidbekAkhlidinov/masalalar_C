#include <iostream>
using namespace std;

void ADDLeftDigit(int k, int d){
	cout<<d<<k<<"\n";
}
int main(){
	int k,d,d1,d2;
	cout<<"k=";
	cin>>k;
	cout<<"d=";
	cin>>d;
	ADDLeftDigit(k,d);
	cout<<"d1=";
	cin>>d1;
	ADDLeftDigit(k,d1);
	cout<<"d2=";
	cin>>d2;
	ADDLeftDigit(k,d2);	
}