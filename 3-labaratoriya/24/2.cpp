#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int n;
	cout<<"n=";
	cin>>n;
	int k[n];
	int s=0;
	for(int i=1; i<=n; i++){
		k[i] = rand()%20;
		cout<<k[i]<<" ";	

	}
	int i =1;
	while(k[i]!=0){
		s = s+k[i];
		i++;
	}
	
	
	cout<<"\nS="<<s;
}