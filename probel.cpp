#include <iostream>
using namespace std;
int main(){
	string l="",s = "salom qalesan      hoy qiz       isming    nima";
	
	for(int i=0; i<=s.length(); i++){
		if(s[i]==' ' and s[i+1]==' '){
			
		}else{
			l= s[i] + l;
		}
	}
	cout<<l;
}