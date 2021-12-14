#include <iostream>
#include <string>
using namespace std;
int main(){
	char s[300];
	string soz="";
	cin.getline(s, 300);
	int n=0;
	cout<<"N="; cin>>n;

	int i,k=1;
	for(i=0; i<=strlen(s); i++){
		soz = s[i] + soz;
		if(s[i]==' '){
			k++;
		}
		if(k==n+1) break;
	}

	cout<<soz;
}