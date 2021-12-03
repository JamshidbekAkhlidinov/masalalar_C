#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int i1,i2,i3,k1,k2;
	int k[10][10];
	for(i1=1; i1<=7; i1++){
		for(i2=1; i2<=7; i2++){
			cin>>k[i1][i2];
		}
	}
	

	
	
	for(i1=1; i1<=7; i1++){
		for(i2=1; i2<=7; i2++){
			if(k[i1][i2]==1){
				k1 = i1;
				k2 = i2;
		}
	}
	
}
	cout<<abs(4-k1)+abs(4-k2);
}