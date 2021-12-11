#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
	ofstream yoz("output.txt");
	ifstream oqi("input.txt");
	string a,b;
	int c,d;
	getline(oqi,a);
	getline(oqi,b);
	c = stoi(a);
	d = stoi(b);
	cout<<"a="<<c;
	cout<<"\nb="<<d;
	yoz<<c+d;	
	cout<<"\na+b="<<c+d;
	
}