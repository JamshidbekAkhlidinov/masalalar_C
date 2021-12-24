#include <iostream>
#include <fstream>
using namespace std;
int main()
{	ifstream oqi("input.txt");
	ofstream yoz("output.txt");
	string a,s,d,m[300];
	char b;
	int i;
	cout<<"S satrni kiritng "; getline(oqi,s); cout<<s<<endl;
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
	
	for(int k=0; k<b; k++){
		cout<<"m["<<k<<"]="<<m[k]<<" "<<m[k].length()<<endl;
		yoz<<"m["<<k<<"]="<<m[k]<<" "<<m[k].length()<<endl;}
}