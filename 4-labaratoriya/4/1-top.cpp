#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int i,k=1;
	for(i=0; i<=s.length(); i++){
		if(s[i]==' '){
			k++;
		}
	}
	cout<<k;
}