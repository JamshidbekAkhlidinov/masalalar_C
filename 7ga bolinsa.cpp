#include <iostream>
using namespace std;

int main(){
	int n=10;
	int arr[n];
	
	for(int i=1; i<=n; i++){
		arr[i]=rand()%15;
		cout<<arr[i]<<" ";
	}
	cout<<"\n7ga bolinadiganlari\n";
	for(int i=1; i<=n; i++){
		if(arr[i]%7==0)
		cout<<arr[i]<<" ";
	}
	
	
}