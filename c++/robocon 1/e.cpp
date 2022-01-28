#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int l[n],r[n],a[n],b[n];
	for(int i=0; i<n; i++){
		cin>>l[i];
		cin>>r[i];
	}
	cout<<endl<<endl;
	for(int i=0; i<n; i++){
		a[i] = l[i]+1;
		b[i] = r[i]-1;
		cout<<b[i]%a[i]<<endl;
	}
	
	

}	