#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	int n;	
	cin>>n;
	int *k;
	k = (int*) malloc(n*sizeof(int));
	
	for(int i=1; i<=n; i++){
		k[i] = rand()%100;
		cout<<k[i]<<" ";		
	}
	free(k);
	cout<<"\n\n";

	for(int i=1; i<=n; i++){
		cout<<k[i]<<" ";		
	}
}