#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a[10] = {3.14,7,4,7,2,9},y[10];
	for(int i=0;i<6; i++){
		y[i] = sqrt(abs(2*sin(i)));
		cout<<"X="<<a[i]<<" Y="<<y[i]<<"\n";
	}
}