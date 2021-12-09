#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream yoz("output.txt");
	ifstream oqi("input.txt");
	string a,k;
	int b,i,l;
	cin>>a;
	
	for(i=0; a.length(); i++){
		k=a[i]+k;
		cout<<a[i];
	}
	
	if(a==k){
		yoz<<"palindrom";
		cout<<"Palindrom";
	}else{
			yoz<<"palindrom emas";
		cout<<"Palindrom emas";
	}
}