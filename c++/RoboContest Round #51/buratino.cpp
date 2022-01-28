#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a=0,o;
	cin>>n; o=n;
	int r[n+1],k[n+1],i=0;
	while(n>10){
		a = n%10;
		n = n/10;
		r[i] = a;
		i++;
	}
	r[i] = n;
	int q=1,w=0;
	for(int j=0; j<=i; j++){
		q = q*r[j];
		w = w+r[j];
	}
	cout<<max(o,max(w,q));
	return 0;
}