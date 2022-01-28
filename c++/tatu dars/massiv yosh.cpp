#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
	int n,yosh;
	cout<<"N="; cin>>n;
	cout<<"Yosh =>"; cin>>yosh;
	int A[n];
	for(int i=1; i<=n; i++){
		A[i] = 20-rand()%20;
		cout<<A[i]<<" ";
	}
	cout<<endl;
	for(int i=1; i<=n; i++){
		if(A[i]==yosh)
		A[i] = 0;
		cout<<A[i]<<" ";
	}
	
}