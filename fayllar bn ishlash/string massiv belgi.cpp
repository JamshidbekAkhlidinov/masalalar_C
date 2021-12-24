#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream oqi("output.txt");
	ofstream yoz("intput.txt");
	string s;
	cout<<"Kiritilgan satr\n";
	getline(oqi,s);
	cout<<s<<endl;
	int i,l=0,k=0,r=0;
	string harf[300],raqam[300],belgi[300];
	cout<<"\nHarflar\n";
	for(i=0; i<=s.length(); i++){
		if(isdigit(s[i])){
			cout<<s[i]<<"-"<<int(s[i])<<" ";
			yoz<<s[i]<<"-"<<int(s[i])<<" ";
			harf[l] = s[i];
			l++;
		}
	}
	yoz<<"\n";
	cout<<endl;
	cout<<"Raqamlar\n";
	for(i=0; i<=s.length(); i++){
		if(isalpha(s[i])){
		cout<<s[i]<<"-"<<int(s[i])<<" ";
		yoz<<s[i]<<"-"<<int(s[i])<<" ";
			raqam[k] = s[i];
			k++;
		}
	}yoz<<"\n";	
		
	cout<<endl;
	cout<<"Belgilar\n";
	for(i=0; i<=s.length(); i++){
		if(ispunct(s[i])){
		cout<<s[i]<<"-"<<int(s[i])<<" ";
		yoz<<s[i]<<"-"<<int(s[i])<<" ";
			belgi[r] = s[i];
			r++;
		}
	}	
	yoz<<"\n";	
}