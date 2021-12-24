#include <iostream>
using namespace std;

int main(){
	float a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<max(a,max(b,max(c,d)));
	
}