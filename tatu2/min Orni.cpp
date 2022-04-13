#include <iostream>
#include <time.h>
using namespace std;
int main(){
	
	srand (time(0));
	
	int n;
	cin>>n;
	
	int a[n];
	
	
	for(int i=1; i<=n; i++){
		a[i] = rand()%10+12;
		cout<<a[i]<<" ";
	}
	cout<<"\n\n";
	

	int min = a[1];
	int orni = 1;	

	for(int i=1; i<=n; i++){
		if(min>a[i]){
			min = a[i];
			orni = i;
		}
	}
	
	cout<<min<< "  "<<orni;
	
	main();
		
}