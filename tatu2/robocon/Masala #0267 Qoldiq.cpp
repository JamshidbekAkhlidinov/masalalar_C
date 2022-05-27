#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long a,k,l,r,x;
	
	cin>>a>>k>>l>>r;
	if(a>k and l<r){
		int soni = 0;
		for(int i=l; i<=r; i++){
			if(i%a==k){
				soni++;
			}
		}
		cout<<soni;
	}else{
		cout<<0;
	}
	
	
}