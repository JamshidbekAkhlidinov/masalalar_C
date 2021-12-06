#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int p[n][2];
	for(int w=1; w<=n; w++){
		for(int l=1; l<=2; l++){
			p[w][l] = rand()%20;
			cout<<p[w][l]<<" ";
		}
		cout<<endl;
	}
}