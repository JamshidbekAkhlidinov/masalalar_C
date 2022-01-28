#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
	float a,b,x,y;
	cout<<"x=";cin>>a;
	cout<<"y=";cin>>y;
	
	a= 2*cos(x-M_PI/6)/((log10(2*x)/log10(M_E)/pow(sin(x-y),2)));
	b = pow(cos(atan(1/a)),2)+ pow(M_E,(x+y)/3);
	

	
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	
	
}