#include <iostream>
using namespace std;

int main(){
	int a,b,c,i,k;
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	int tub[b-a+1]
	for(int i=a; i<=b; i++){
		for(int y=1; y<=i; y++){
			if(i%y==0){
				k++;
			}
		}
		if(k>2) {
			c++;
			tub[k]= i;
		}
		k = 0 ;
	}
	
}