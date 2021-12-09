#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int fact(int n){
	int s=1;
	for(int i=1; i<=n; i++){
		s = s*i;
	}
	return s;
}

int main(){
	ofstream yoz("output.txt");
	ifstream oqi("input.txt");
	string a;
	int b;
	getline(oqi,a);
	b = stoi(a);
	
	yoz<<fact(b);	
	cout<<fact(5);
	
}