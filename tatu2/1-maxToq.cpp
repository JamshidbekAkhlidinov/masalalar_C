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
		a[i] =MyRand(-20,20);
		cout<<a[i]<<" ";
	}
	cout<<"\n\n";
	
	int max = a[1],l=1;
	
	for(int i=1; i<=n; i++){
		if(a[i]%2==1 and max<a[i]){
			max = a[i];
			l=i;
		}
	}	

	cout<<"max "<<max<<" Id=>"<<l<<"\n";
	
	cout<<"\n\n";
	main();
		
}