#include <iostream>
using namespace std;

int main(){
	string s;int p=0;
	getline(cin,s);
	for(int i=0; i<s.length(); i++){
		if(s[i]=='a' or s[i]=='i' or s[i]=='u' or s[i]=='e' or s[i]=='o'){
			p++;
		}
	}
	cout<<p<<" ta unli bor";
}