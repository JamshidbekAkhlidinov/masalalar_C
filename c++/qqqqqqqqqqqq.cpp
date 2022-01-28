
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 float a,b,f,x;
 int n;
  cout<<"n = ";
  cin>>n;
  cout<<"x = ";
  cin>>x;
  
  
  switch(n){
  	case 1: a=0.8; b=2.4; f=pow(M_E,1.5*a*x); break;
  	case 2: a=1.2; b=4.2; f=pow(M_E,2*a*x);break;
  	case 3: a=3.4; b=8.1; f=pow(M_E,3*a*x);break;
  }
 
 
 if(x<=a) cout<<"y = "<< pow(M_E ,a*x) + f*pow(cos(b*x) ,5);
 if(a<x<=b*b) cout<<"y = " << a+cos(b*x)*cos(b*x) - log(f*x);
 if(x>b*b) cout<<" y = "<< cos(a+b*f*x)*cos(a+b*f*x);
	
}