#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int k[n];
	
	cout<<"\nToplam elementlari:\nA= { ";
	for(int i=1; i<=n; i++){
		k[i] = rand()%8+1;
		cout<<k[i]<<" ";
	}
	cout<<" }\n\n";
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			for(int y=1; y<=j; y++){
				cout<<k[i]<<" ";
			}
		}
	}
	
}