#include <iostream>
#include <string>
using namespace std;

int main(){
	string s,k,l;
	int unli,undosh;
	cin>>s;
	
	for(int i=0; i<=s.length(); i++){
		if(s[i]=='a' or s[i]=='u' or s[i]=='i' or s[i]=='e'){
			unli++;
		}else{
			undosh++;
		}
	}
	
	cout<<"Unlilar =>"<<unli;
	cout<<"\nUnldoshlar =>"<<undosh;
	
}