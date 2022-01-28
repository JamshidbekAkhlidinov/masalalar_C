#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float r,i,n,m;
	float s1=0, s2=0, s3=0;
	n = 13; m = 4;
	for (i=1;i<=n; i++){
		for (r=1;r<=m; r++){
			s1 = (pow(-1,i)*cos(i+r)+5)/(5*i+pow(7,-r)+pow(i,-r));
			s2 = s2+s1;
		}
		s3 = s3+s2;
	}
	cout<<"S="<<s3<<endl; 

}