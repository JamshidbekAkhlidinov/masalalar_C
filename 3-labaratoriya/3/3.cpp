#include <iostream>
#include <string>
using namespace std;
int main(){
	string s,m="";
	int k,l;
	getline(cin,s);

	s[0] = toupper(s[0]);
		for(int i=0; i<=s.length(); i++){
			if(s[i]==' '){
				s[i+1] = toupper(s[i+1]);
			}
		}
			
	for(int k=65; k<=90; k++){
	for(int i=0; i<=s.length(); i++){
			if(s[i]==' ' and char(k)==s[i+1]){
				cout<<s;
			}
	}
}
	cout<<s<<endl;
	
	
}