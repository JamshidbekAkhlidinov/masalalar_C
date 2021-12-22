#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	ifstream oqi("output.txt");
	ofstream yoz("input.txt");
	string n;int p=0,t;
	getline(oqi,n);
	int m=stoi(n);
	for(int k=2; k<m; k++){
		if(m%k==0){
			p++;
		}	
		if(p==2) {
			p=0;
			cout<<k<<endl;			
		}
	}
}