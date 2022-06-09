#include <iostream>
#include <time.h>
using namespace std;
int main(){
	srand(time(0));
	int n;
	cout<<"n=";
	cin>>n;
	int arr[n];
	
	for(int i=1; i<=n; i++){
		arr[i] = rand()%29+1;
		cout<<arr[i]<<" ";
	}
	int max = arr[1] ;
	int min = arr[1] ;
	
	for(int i=1; i<=n; i++){
		if(max<arr[i])	
			max  = arr[i];
	}
	
	for(int i=1; i<=n; i++){
		if(min>arr[i])	
			min  = arr[i];
	}
	
	
	cout<<"\nMax"<<max;
	cout<<"\nMin"<<min;
	
	cout<<"\nMax/min =>";
	cout<<max/min;
}