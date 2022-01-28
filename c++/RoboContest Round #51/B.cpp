#include <iostream>
using namespace std;
int main(){
	int n,r;
	cin>>n;
	if(n==15){
		r=6+5;
	}else if(n==5){
		r=15+6+9+14;
	}else if(n==6){
		r=15+5+9+12;
	}else if(n==14){
		r=5+9+3+1;
	}else if(n==9){
		r=5+6+12+8+3+14;
	}else if(n==12){
		r=6+9+8+2;
	}else if(n==1){
		r=14+3+4+11;
	}else if(n==3){
		r=14+1+4+10+8+9;
	}else if(n==8){
		r=12+9+3+10+7+2;
	}else if(n==2){
		r=12+8+7+13;
	}else if(n==11){
		r=1+4;
	}else if(n==4){
		r=11+1+3+10;
	}else if(n==10){
		r=4+3+8+7;
	}else if(n==7){
		r=10+8+2+13;
	}else if(n==13){
		r=2+7;
	}
	
	cout<<r;
}