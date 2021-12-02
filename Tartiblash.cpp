#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int n,k,l,max;
	cin>>n;
	int o[n];
	for(l=1; l<=n; l++){
//		cin>>o[l];
		o[l] = rand()%10;
		cout<<o[l]<<" ";
}
cout<<endl;
	max = o[1];
	for(l=1; l<=n; l++){
		if(max<o[l]){
			max = o[l];
		}
	}
	cout<<max;
	
}