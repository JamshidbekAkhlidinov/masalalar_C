#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream oqi("input.txt");
	ofstream yoz("output.txt");
	string s,d,q;
	string m[300],k[300];
	int i,n,b=0;
	getline(oqi,s); cout<<s<<endl;
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
	int max = m[0].length(); n=0;
	for(int k=0; k<b; k++){
		cout<<"m["<<k<<"]="<<m[k]<<" "<<m[k].length()<<endl;
		if(max<m[k].length()){
			max= m[k].length();
			n=k;
		}
	}
	cout<<"\nMax soz uzinligi =>"<<max<<" Max so'z =>"<<m[n];
	yoz<<"\nMax soz uzinligi =>"<<max<<" Max so'z =>"<<m[n];
}