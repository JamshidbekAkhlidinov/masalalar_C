#include<bits/stdc++.h>
using namespace std;
int main()
{
   float f1,f2,f1xhosila,f2xhosila,f1yhosila,f2yhosila,D, D1, D2,x[10],y[10];  
   int n;
   cout<<endl;
   cout<<"Ikkita chiziqsiz tenglamalar sistemasini taqribiy yechishda NYUTON usuli"<<endl;
   cout<<endl<<"aniqlik E=0,00017"<<endl<<endl;
   x[0]=1; y[0]=1;
   for(n=0; ;n++)
   { 
     f1=pow(9*x[n],2)-4*x[n]*y[n]+(15/4)*pow(y[n],2)-17;
     f2=(19/5)*pow(x[n],2)+(11/2)*x[n]*y[n]+(20/3)*y[n]*y[n]-17;
     
     f1xhosila=-18-4*y[n];
     f1yhosila=(19*y[n])/2-4*x[n];
     
     f2xhosila=(38*x[n]/5)+11*y[n]-2;
     f2yhosila=11*x[n]/2+40*y[n]/3;
     
     D=f1xhosila*f2yhosila-f1yhosila*f2xhosila;
     
     D1=f1*f2yhosila-f2*f1yhosila;
     D2=f2*f1xhosila-f1*f2xhosila;
	 	
     x[n+1]=x[n]-D1/D;
     y[n+1]=y[n]-D2/D;
     
     cout<<"x["<<n+1<<"]="<<x[n+1]<<"   "<<"y["<<n+1<<"]="<<y[n+1]<<endl;
     
     if(sqrt(pow(x[n+1]-x[n],2)+pow(y[n+1]-y[n],2))<0.00017)
	 break;
   }
     cout<<endl;
     cout<<"tenglamaning taqribiy yechimi"<<endl<<" x = "<<x[n+1]<<endl<<" y = "<<y[n+1]<<endl;
     return 0;  }
