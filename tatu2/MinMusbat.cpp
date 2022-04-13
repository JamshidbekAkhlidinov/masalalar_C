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
	


	int k=0;
	int j[n];

	for(int i=1; i<=n; i++){
	 if(a[i]>0){
	 	k++;
	 	j[k] = a[i];
	 }
	}

	int min = j[1];
	int minN = 1;
	
	for(int i=1; i<=k; i++){	
		if(j[i]>0 and min>j[i]){
			min = j[i];
			minN = i;
		}
	}
	

	cout<<min;
	
	
	cout<<"\n\n";
	main();
		
}