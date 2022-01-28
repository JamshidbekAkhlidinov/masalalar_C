#include <iostream>
using namespace std;
int main(){
	int p=0,d,m,s[10000],n;
	cin>>n;
	for(int i=0; i<n; i++){
		for(int k=0; k<3; k++){
			cin>>s[i];
		}
	}
	for(int i=0; i<n; i++){
		for(int k=0; k<3; k++){
		p += s[i];
	}
	}
	cout<<p-n;
	
}