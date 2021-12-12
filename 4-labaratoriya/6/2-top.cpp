#include <iostream>
#include <string>
using namespace std;
int main(){
	char A[200];
	cout<<"Satr =>"; 
	cin.getline(A,200);
	int n,m=1;
	cout<<"n="; cin>>n;
	for(int k=0; k<=sizeof(A); k++){
			if(A[k]==' '){
					m++;
					if(m==n){
						A[k+1] = toupper(A[k+1]);
					}	
			}
			}
	cout<<"\n"<<A;
	}
	
