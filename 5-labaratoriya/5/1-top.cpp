#include <iostream>
using namespace std;
int main(){
	string s,p;
	char l;
	cout<<"Satrni kiritng "; getline(cin,s);
	cout<<"Ochirilish kerak belgi "; cin>>l;
		
	for(int i=0; i<=s.length(); i++){
		if(s[i]!=l) {
				p+=s[i];
		}
	}
	cout<<"\n"<<p;
}