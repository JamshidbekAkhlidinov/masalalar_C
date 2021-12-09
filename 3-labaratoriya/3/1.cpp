#include <iostream>
#include <string>
using namespace std;
int main(){
	string s,l;
	int i;
	cout<<"Soz kiriting  => "; cin>>s;
	for(i=0; i<=s.length(); i++){
		l = s[i] + l;
	}
	cout<<"Teskari satr => "<<l;
}