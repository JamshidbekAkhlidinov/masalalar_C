#include <iostream>
#include <stdlib.h>

class SANOQ_SISTEMA {
	public:
	int n;
	char a[50],b[50],c[50]	;
};

using namespace std;
int main(){
	SANOQ_SISTEMA s;
	int n;
	cout<<"n="; cin>>n;
	itoa(n,s.a,2);
	itoa(n,s.b,8);
	itoa(n,s.c,16);
	cout<<"Ikkilikda "<<s.a<<endl;
	cout<<"Sakkizlikda "<<s.b<<endl;
	cout<<"On oltilikda "<<s.c<<endl;
}