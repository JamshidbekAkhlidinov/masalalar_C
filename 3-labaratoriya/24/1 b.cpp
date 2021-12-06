#include <iostream>
using namespace std;

void Right3(int a, int b, int c){
int k;
	k = a;
	a = b;
	b = c;
	c = k;
	cout<<a<<" "<<b<<" "<<c<<"\n";

}
int main(){
	int a,b,c;
	int a1,b1,c1;
	int a2,b2,c2;
	
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	cout<<"c="; cin>>c;
	Right3(a,b,c);
	
	cout<<"a1="; cin>>a1;
	cout<<"b1="; cin>>b1;
	cout<<"c1="; cin>>c1;
	Right3(a1,b1,c1);
	
	cout<<"a2="; cin>>a2;
	cout<<"b2="; cin>>b2;
	cout<<"c2="; cin>>c2;
	Right3(a2,b2,c2);
	
}