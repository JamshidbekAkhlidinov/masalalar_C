#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
//	char a[300];
	string a;
	ifstream oqi("output2.txt");
	ofstream yoz("input2.txt");
	cout<<"Satrni kiritng "; getline(oqi,a); cout<<endl<<a<<endl;
	int n;
	string p;
	cout<<"n="; cin>>n;
	for(int i=0; i<=a.length(); i++){
		if(a[i]==' '){
		 	a[i+n] ='.';
		}
	}
	cout<<"\n"<<a;
	yoz<<a;
	
}