#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream yoz("input.tx");
	string n;
	getline(cin,n);
	yoz<<n;
	cout<<n.length();
}
