#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream yoz("output.txt");
	ifstream oqi("input.txt");
	string a,k="";
	int b,i,l;
	getline(cin,a);
	
	for(i=0; i<a.length(); i++){
		k=a[i]+k;
	}
	
	if(a==k){
		yoz<<"palindrom\n";
		cout<<"Palindrom\n";
	}else{
			yoz<<"palindrom emas\n";
		cout<<"Palindrom emas\n";
	}
	

}