#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;
int main(){
	ofstream yoz("input.tx");
	int n;
	cin>>n;
	int k[n];
	for(int i=1; i<=n; i++){
		k[i] =20-rand()%19;
		yoz<<k[i]<<" ";
		cout<<k[i]<<" ";
	}
	
}
