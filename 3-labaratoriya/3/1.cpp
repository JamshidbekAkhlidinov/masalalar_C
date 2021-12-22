#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	ifstream oqi("output.txt");
	ofstream yoz("input.txt");
	string s,l;
	getline(oqi,s);
	int i;
	cout<<"Soz kiriting  => "; cout<<s<<endl;
	for(i=0; i<=s.length(); i++){
		l = s[i] + l;
	}
	cout<<"Teskari satr => "<<l;
	yoz<<l;
}