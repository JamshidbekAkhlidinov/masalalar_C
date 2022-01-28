#include <iostream>

using namespace std;

int main(){
	int kun,oy,s,a,i,b,k;
	cout<<"kun = "; cin>>kun;
	for (int i = 1; i <= 12; i++){  
	
	if (i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12){
		k = 31;
	}
	else if (i = 2){ 
		k = 28;
	}else{
		k = 30;
	}
	a = kun/k;
	b = kun%k;
	if(b<k){
		cout<<"oy: "<<a<<" kun:"<<b;break;
	}	
}

}