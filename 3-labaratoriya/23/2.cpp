#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float b[20] = {3.5,-0.66, 4.3,0.005,0.6, -740,73,1,2.5};
	float z[20];
	
	int i;
	
	for(i=0; i<9; i++){
		z[i] = pow(b[i]*b[i],1/3);
		cout<<z[i]<<" ";
	}
}