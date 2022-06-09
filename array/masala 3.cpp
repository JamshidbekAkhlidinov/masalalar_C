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
	for(int i=1; i<=n; i++){
		arr[i] = rand()%29+1;
		cout<<arr[i]<<" ";
		if(i%2==1 and arr[i]%2==0){
			sana++;
		}
	}
	
	cout<<"\n\nSoni =>";
	cout<<sana;
	
}