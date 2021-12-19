#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string s,p;
	char l;
	ifstream oqi("output.txt");
	ofstream yoz("input.txt");
	
	cout<<"Fayldagi satr: => "; getline(oqi,s); cout<<s<<endl;
	cout<<"Ochirilish kerak belgi "; cin>>l;
		
	for(int i=0; i<=s.length(); i++){
		if(s[i]!=l) {
				p+=s[i];
		}
	}
	cout<<"\n"<<p;
	yoz<<p;
}