#include <iostream>
using namespace std;

int main(){
	
	char a,b;
	cin>>a>>b;
	
	int a1,b1,n=0;
	for(char k='A'; k<='Z'; k++){
		n++;
		if(a==k){
			a1 = n;
		}
		if(b==k){
			b1 = n;
		}
		
	}
	
	cout<<a1+b1;
	
}