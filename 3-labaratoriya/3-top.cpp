#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
int A[10+1][10+1],B[9+1][9+1];
int n,k;
int k1,k2,k3,k4;

for(k1=1;k1<=10; k1++){
for(k2=1;k2<=10; k2++){
	A[k1][k2] = rand()%20+1;
	cout<<A[k1][k2]<<" ";
	}
	cout<<endl;
}

cout<<"n="; cin>>n;
cout<<"k="; cin>>k;
for(k1=1;k1<=10; k1++){
for(k2=1;k2<=10; k2++){
	if(k1==k or k2==n){
		A[k2][k1] = 0;
	}
	}
}

for(k1=1;k1<=10; k1++){
for(k2=1;k2<=10; k2++){
	if(A[k1][k2]!=0){
		B[k1][k2] = A[k1][k2] ;
		cout<<B[k1][k2]<<" ";
	}
}
cout<<endl;

}

}

