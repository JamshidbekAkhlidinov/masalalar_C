#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream yoz("output.txt");
	string a,b;
	getline(cin,a);
	int o=a.length();
	int k=0;
	string s;
	yoz<<a<<"\n";
	for(int i=0; i<=o; i++){
		if(isdigit(a[i])==1){
			s = s + a[i];
			k++;
		}
	}
	int m = stoi(s),q=0;
	yoz<<"Raqamlar "<<m<<"\n";
	cout<<"raqam =>"<<m<<"\n";
	while(m!=0){
		q = q+ m % 10;
		m = m / 10;
	}
	
	cout<<q;
	yoz<<"Yigindisi "<<q;
	
}