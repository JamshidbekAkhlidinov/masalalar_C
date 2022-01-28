#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream yoz("input.txx");
	string s;int p=0;
	getline(cin,s);
	yoz<<s;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='k'){
			p++;
		}
	}
	cout<<p<<" ta k bor";
}