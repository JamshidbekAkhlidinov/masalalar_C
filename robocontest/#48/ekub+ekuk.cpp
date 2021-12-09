#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	
	int ekuk,ekub;
		for(int i=1; i<=a*b; i++){
			if(i%a==0 and i%b==0){
				ekuk = i;
				break;
			}
		}

	while (a!=b){
		if(a>b){
			a = a-b;
		}else{
			b = b-a;
		}
		ekub = a;
	}
	
int x = ekuk+ekub;
cout<<x;
	
}