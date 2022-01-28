#include <iostream>
using namespace std;
int main(){
	int a,b,d[100000];
	cin>>a>>b;
	for(int i=a; i>=1;i--){
		d[i] = i;
	}
	for(int i=a; i>=1; i--){
		cout<<d[i]<<" ";
	}
	
}