#include <iostream>
using namespace std;
int main(){
	string s;
	cout<<"Satr kiriting =>"; getline(cin,s);
	char k = s[0];
	int j=1;
	for(int i=1;i<=s.length(); i++){
		if(k==s[i]){
			j++;
		}
	}	
	cout<<k<<" => harfi satrda |"<<j<<"| marta qatnashgan";
}