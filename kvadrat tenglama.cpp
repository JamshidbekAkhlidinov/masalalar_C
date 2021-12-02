#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float a,b,c;
	float d,x1,x2,x;
	cin>>a>>b>>c;
	
	d = sqrt(b*b-4*a*c);
	
	if(d>0){
		x1 = (-b+d)/(2*a);
		cout<<setprecision(4)<<fixed<<x1<<" ";
		x2 = (-b-d)/(2*a);
		cout<<setprecision(4)<<fixed<<x2;
	}else if(d==0){
		cout<<setprecision(4)<<fixed<<-b/(2*a);
	}else if(d<0){
		cout<<"Bosh toplam"<<endl;
	}
	
	
}