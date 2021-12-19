#include <iostream>
#include <cmath>
using namespace std;

class uchburchak{
public:
float a,b,c,p,s;
public:
uchburchak (float a,float b, float c){
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
}

};


int main(){
	float a,b,c;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	
	
	uchburchak obj(a,b,c);
	cout<<"Yarim P =>"<<obj.p<<endl;
	cout<<"Yusa S =>"<<obj.s<<endl;
	
	

}