#include <iostream>
#include <time.h>
using namespace std;
int main(){
	srand(time(0));
	int n;
	cout<<"n=";
	cin>>n;
	int arr[n];
	
	int s1=0,s2=0;
	
	for(int i=1; i<=n; i++){
		cin>>arr[i];
	}
	
	for(int i=1; i<=n; i++){
		cout<<arr[i]<<" ";
	
		if(arr[i]==1){
			s1 = 1;
		}
		if(arr[i]==4){
			s2 = 1;
		}			
	}
	
	if(s1==1 && s2==1){
		cout<<"true";
	}else{
		cout<<"false";
	}
	
	
	
}