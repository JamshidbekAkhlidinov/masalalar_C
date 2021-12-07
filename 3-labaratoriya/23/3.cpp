#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int n;
	int i,k;
	int y[5][5];
	for(i=0; i<5;i++){
		for(k=0; k<5;k++){
			y[i][k] = rand ()%10;
			cout<<setw(3)<<y[i][k];
		}
		cout<<endl;
	}
cout<<endl;
cout<<endl;
	for(i=0; i<5;i++){
		for(k=0; k<5;k++){
			y[i][k] = pow(y[i][k],k+1);
			cout<<setw(7)<<y[i][k];
		}
		cout<<endl;
	}
	
	
}