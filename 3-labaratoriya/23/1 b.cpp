#include <iostream>
#include <string.h>

using namespace std;

void InvertDigits(long long k){
	long long j,n;
	string s,p="";
	s = to_string(k);
	for(int i=0; i<=s.length(); i++){
		p = s[i]+p;
	}
	cout<<p;
}

int main(){
long long n;
	cout<<"n="; cin>>n;
	InvertDigits(n);
}