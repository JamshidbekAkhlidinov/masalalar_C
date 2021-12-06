#include <iostream>

using namespace std;

int main(){
	long int n,k,l,r,t=0;
//	cout<<"n=";
	cin>>n;
	double p[n];
	while(t!=n){
		k++;
		for(l=1; l<=k; l++){
			if(k%l==0){
				r++;
			}
		}
		
		if(r==2){
			cout<<k<<" ";		
			t++;
			p[t] = k;
	}

		r = 0;
	}

	cout<<"\n"<<p[n];
}