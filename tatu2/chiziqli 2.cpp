#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int v;
//	cin>>v;
	v = 17;
	
	float f1,f2,x[0],y[0];
	float f1xhosila,f2xhosila,f1yhosila,f2yhosila;
	
	x[0]=1; y[0]=1;
	
	int i = 0;
	while(true){
		
		f1 = pow(x[i],2)*((v+1)/2)-x[i]*y[i]*((v+3)/5)+pow(y[i],2)*((v+1)/4)-v;
		f2 = pow(x[i],2)*((v+2)/5)-x[i]*y[i]*((v+5)/4)+pow(y[i],2)*((v+3)/3)-v;
		
		f1xhosila = 18-4*y[i];
     	f1yhosila = (19*y[i])/2-4*x[n];
     
	    f2xhosila = (38*x[i]/5)+11*y[n]-2;
	    f2yhosila = 11*x[i]/2+40*y[n]/3;
		
		i++;

	}
	
}