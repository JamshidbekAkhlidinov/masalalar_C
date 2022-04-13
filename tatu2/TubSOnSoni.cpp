#include <iostream>
#include <time.h>
using namespace std;

int MyRand(int a,int b){
	return rand()%(b-a)+a;
}



int main(){
	
	srand (time(0));
	
	int n;
	cin>>n;
	
	int a[n];
	
	
	for(int i=1; i<=n; i++){
		a[i] =MyRand(1,30);
		cout<<a[i]<<" ";
	}
	cout<<"\n\n";
	int k=0,p=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=a[i]; j++){
			if(a[i]%j==0){
				k++;
			}	
		}
		if(k==2){
			cout<<a[i]<<" ";
			p++;
		}
		k=0;
	}

	cout<<"\nTub sonlar soni "<<p;
	
	cout<<"\n\n";
	main();
		
}