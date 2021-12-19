#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream oqi("output.txt");
	ofstream yoz("input.txt");
	string a,k="";
	getline(oqi,a);

	for(int i=0; i<a.length(); i++){
		if(a[i]=='g' and a[i+1]=='u' and a[i+2]=='l'){
			i++; i++;
		}else{
			cout<<a[i];
			yoz<<a[i];
		}
		
	}
	
}