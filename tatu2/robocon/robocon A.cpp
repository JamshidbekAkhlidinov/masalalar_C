#include <iostream>
#include <cmath>
using namespace std;

int fact(int n){
	int s=1;
	for(int i=1; i<=n; i++){
		s*=i;
	}
	return s;
}

int main(){

int n,k;
cin>>n;

cout<<pow(2,n+1);
	
  
}