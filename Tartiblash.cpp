#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,k,l,max;
	cin>>n;
	int o[n];
	for(l=0; l<n; l++){
		cin>>o[l];
//		o[l] = rand()%10;
//		cout<<o[l]<<" ";
}
for(int i=0; i<n-1; i++)
for(int j=n-2; j>=i; j--){
	if(o[j]>o[j+1]){
		int c = o[j];
		o[j] = o[j+1]; 
		o[j+1] = c;
	}
}


	for(int j=0; j<n; j++){
		cout<<o[j]<<endl;
	}
	
}