#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int n;
	cout<<"n=";	cin>>n;
	int k[n];
	cout<<"Massiv qiymatlai\n";
	for(int i=1; i<=n; i++){
		k[i] = rand()%20;
		cout<<k[i]<<" ";
	}
	cout<<"\n";
	for(int i=1; i<=n; i++){
		if(i%2==0){
			cout<<k[i]<<" ";
		}
	}
}