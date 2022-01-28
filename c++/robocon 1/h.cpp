	#include <iostream>
	#include <cmath>
	using namespace std;
	int main(){
		int n;
		cin>>n;
		int k[n];
		for(int i=0; i<n; i++){
			cin>>k[i];
		}
		for(int l=0; l<n;l++){
			for(int j=1; j<k[l]; j++){
				if(k[l]%j==0){
					cout<<j<<" ";
				}
			}
			cout<<endl;	
		}
	
	}