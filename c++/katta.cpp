#include <iostream>
using namespace std;
int main(){
	string s;
	cout<<"S="; cin>>s;
	for(int i=0; i<=s.length();i++){
		s[i] = tolower(s[i]);
	}
	cout<<s;
}