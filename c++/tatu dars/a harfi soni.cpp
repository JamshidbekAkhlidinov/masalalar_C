#include <iostream>
#include <string>
using namespace std;
int main(){
	string s; int k=0;
	getline(cin,s);
	for(int i=0; i<=s.length(); i++){
		if(s[i]=='a'){
			k++;
		}
	}
	cout<<k<<" ta a harfi bor\n\n";
	main();
}