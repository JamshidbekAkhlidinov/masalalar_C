#include <iostream>
#include <string>
using namespace std;
int main(){
	string l;
	cout<<"\nSatr =>"; 
	getline(cin,l);
	l=" "+l;
	int n,m=0;
	cout<<"n="; cin>>n;
	for(int k=0; k<=l.length(); k++){
			if(l[k]==' '){
					m++;
					if(m==n){
						l[k+1] = toupper(l[k+1]);
					}	
			}
			}
	cout<<"\n"<<l;
	}
	
