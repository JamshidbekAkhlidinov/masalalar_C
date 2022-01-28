#include <iostream>
using namespace std;
int main(){
	string s,r[30],y;int k=0;
	cout<<"S="; 	getline(cin,s);
	for(int i=0; i<=s.length();i++){
	if(s[i]==' '){
		r[k] = y;
		k++; y = "";
	}else{
		y+=s[i];
	}
	}
	r[k] = y;string d;int u=0;
	for(int i=0; i<=k; i++){
		d = r[i];
		for(int o=0; o<=d.length(); o++){
			if(d[o]=='A') u++;
			if(u!=0){
			cout<<d<<endl;
			u=0;
		}
		}
	}

}