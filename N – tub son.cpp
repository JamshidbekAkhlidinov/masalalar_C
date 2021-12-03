#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i,l,k,m=0;
	for(i=1; i<=n; i++){
		for(l=1;l<=i; l++){
			if(i%l==0){
				m++;
			}
			if(m>2){
					
			}else{
				cout<<l<<" ";
			}
			
		}
						
	}
}