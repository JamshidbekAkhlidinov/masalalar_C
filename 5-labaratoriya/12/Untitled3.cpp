#include <iostream>
using namespace std;
int main(){
	string s,d,q;
	string m[300],k[300];
	int i,n,b=0;
	getline(cin,s); 
	s +=" ";
	for(i=0; i<=s.length(); i++){
		if(s[i]==' '){
			m[b] +=d; 
			b++;
			d = "";
		}else{
			d +=s[i];
		}
	}
	int j=0,t=0;
	for(int k=0; k<b; k++){
		cout<<"m["<<k<<"]="<<m[k]<<" "<<m[k].length()<<endl;
		if(m[k].length()%2==0){ j++;
		}	else{ t++;
		}
	}
	cout<<"Juft "<<j<<" toq "<<t<<endl;
}
