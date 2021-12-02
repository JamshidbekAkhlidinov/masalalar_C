#include <iostream>
#include <cmath>

using namespace std;

int fact(int n){
	long long s = 1;
	for(int i=1; i<=n; i++){
		s = s * i;
	}
	return s;
}

int main(){
	long long n;
	cin>>n;
	cout<<fact(n)%(n+1);
	
}