#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream yoz("output.txt");
	ifstream oqi("input.txt");
	string a,b;
	getline(cin,a);
	yoz<<a<<"\n";
	getline(cin,b);
	yoz<<b;
	
}