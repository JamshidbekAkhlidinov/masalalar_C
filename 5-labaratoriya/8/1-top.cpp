#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	string s; int t=1;;
	ifstream oqi("output.txt");
	ofstream yoz("input.txt");
	while(getline(oqi,s)){
	for(int i=0; i<=s.length(); i++){
		if(ispunct(s[i])){
		cout<<s[i]<<" "<<(int)s[i]<<"\n";
		yoz<<s[i]<<" "<<(int)s[i]<<"\n";
	}
	}           
	}
	
}