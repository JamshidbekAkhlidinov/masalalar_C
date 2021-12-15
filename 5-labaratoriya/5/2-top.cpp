#include <iostream>
using namespace std;
int main(){
	char a[300];
	cout<<"Satrni kiritng "; cin.getline(a,300);
	int n;
	string p;
	cout<<"n="; cin>>n;
	for(int i=0; i<=strlen(a); i++){
		if(n!=i+1 and n<i+1) {
			p+=a[i];
		}else p+=" ochirilgan ";
		
	}
	cout<<"\n"<<p;
}