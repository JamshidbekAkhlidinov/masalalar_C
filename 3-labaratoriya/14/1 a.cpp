#include <iostream>
#include <string>
using namespace std;
int orin(int s,int n){
	string t;
	t = to_string(s);
	cout<<"\nN->o'rinda =>"<<t[n];
	cout<<endl;
}


int main(){
	int s,n;
	cin>>s;
	cin>>n;
	orin(s,n);
		cin>>s;
	cin>>n;
	orin(s,n);
		cin>>s;
	cin>>n;
	orin(s,n);
}