#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream oqi("input.txt");
	ofstream yoz("output.txt");
	string s,m[300],d;
	getline(oqi,s);
	cout<<s;
	int a,b=0;
	s +=" ";
	for(int i=0; i<=s.length(); i++){
		if(s[i]==' '){
			m[b] +=d; 
			b++;
			d = "";
		}else{
			d +=s[i];
		}
	}
	cout<<endl<<"K bor sozlar \n";string h;
	for(int i=0; i<=b; i++){
		h = m[i];
		for(int j=0; j<h.length();j++){
			if(h[j]=='k'){
				cout<<h<<"\n";
				yoz<<h<<"\n";
			}
		}
	}
	
}