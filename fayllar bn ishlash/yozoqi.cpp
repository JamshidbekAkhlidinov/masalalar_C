#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ofstream yoz("output.txt");
	ifstream oqi("input.txt");
	string a,b;
	int c,d;
	getline(oqi,a);
	getline(oqi,b);
	c= stoi(a);
	d = stoi(b);
	
	yoz<<c+d;	
	cout<<c+d;
	
}