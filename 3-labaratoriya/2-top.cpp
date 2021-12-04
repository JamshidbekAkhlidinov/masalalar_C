#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int n;
	cout<<"n=";	cin>>n;
	int k[n];
	cout<<"Massiv qiymatlai\n";
	for(int i=1; i<=n; i++){
		k[i] = -10+rand()%20+1;
		cout<<k[i]<<" ";
	}
	cout<<"\n";
	int min = k[1];
	for(int i=1; i<=n; i++){
		if(min>k[i]){
			min = k[i];
		}
	}
	cout<<"min =>"<<min;
}