#include <iostream>
using namespace std;
int main(){
	char a[100];
	char b[100];
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	int k=0;
	string s;
	for(int i=0; i<strlen(b); i++){
		for(int j=0; j<strlen(a); j++){
			if(b[i]==a[j]){
				s += a[j];
				a[j]='.';
			}
		}
	}
	cout<<a<<endl;
	cout<<b<<s;
}