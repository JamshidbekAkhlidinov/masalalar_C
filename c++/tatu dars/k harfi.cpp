#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	ofstream yoz("file.db");
	string s; int k=0;
	getline(cin,s);
	yoz<<s;
	for(int i=0; i<=s.length(); i++){
		if(s[i]=='k'){
			k++;
		}
	}

	cout<<k<<" ta k harfi bor\n\n";
	
}