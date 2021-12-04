#include <iostream>
using namespace std;
int main(){
int a,b,k,o,c;
cout<<"a=";cin>>a;
cout<<"b=";cin>>b;

int tub[b-a+1];	
for(int i=a; i<=b; i++){
		for(int y=1; y<=i; y++){
			if(i%y==0){
				k++;
			}
		}
		if(k<=2) {
			c++;
			tub[c]= i;
		}
		k = 0 ;
	}
	float s;
	for(int o=1; o<=c; o++){
		cout<<tub[o]<<" ";
		s = s + tub[o];
	}
	cout<<"\nS="<<s/c;
}
