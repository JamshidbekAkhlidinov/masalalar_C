#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream yoz("output.txt");
	ifstream oqi("input.txt");
	string s;
	getline(cin,s);
	yoz<<s;
	
}