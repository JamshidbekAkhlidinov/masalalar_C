#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>

using namespace std;
int main(){
	string a,b,x,y;
	int o,p,r,t;
	cin>>a;
	for(int i=0; i<3; i++){
		b = a[i]+b;
	}
	cout<<b;
	o = stoi(a);
	p = stoi(b);
	
	r = abs(o-p);
	x = to_string(r);
	for(int i=0; i<3; i++){
		y = x[i]+y;
	}
	int f,g,h;
	f = stoi(x);
	g = stoi(y);
	h = f+g;
	cout<<endl;
	cout<<h;
}