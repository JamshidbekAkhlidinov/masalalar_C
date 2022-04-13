#include <iostream>
#include <time.h>
using namespace std;
int main(){
	
	srand (time(0));
	
	int n;
	cin>>n;
	
	int a[n];
	
	
	for(int i=1; i<=n; i++){
		a[i] = 30-rand()%+12;
		cout<<a[i]<<" ";
	}
	cout<<"\n\n";
	
	int max = a[1];
	int min = a[1];
	
	for(int i=1; i<=n; i++){
		if(max<a[i]){
			max = a[i];
		}
	}

	for(int i=1; i<=n; i++){
		if(min>a[i]){
			min = a[i];
	}
	
	cout<<"Max "<<max<<" Min "<<min<<"\n\n";
	
	main();
		
}