#include <iostream>
#include <time.h>
using namespace std;
int main(){
	srand(time(0));
	int n;
	cout<<"n=";
	cin>>n;
	int arr[n];
	
	int sana=0;
	
	cout<<"Massiv\n";
	for(int i=1; i<=n; i++){
		arr[i] = rand()%20;
		cout<<arr[i]<<" ";
	}
	int s=0;
	cout<<"\n\n13 gacha \n";
	for(int i=1; i<=n; i++){
		if(arr[i]==13){
			i++;
	 		continue;
		}
		cout<<arr[i]<<" ";
		s +=arr[i];
	
	}
	cout<<"\nS = "<<s;
	
}