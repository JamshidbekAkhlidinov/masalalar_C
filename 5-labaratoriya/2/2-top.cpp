#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream oqi("input.txt");
	ofstream yoz("output.txt");
		
	string s,gap[20],str;
	getline(oqi,s);
	
	cout<<s;
	int n=1,soni=0;
	for(int i=0; i<=s.length(); i++){
		if(s[i]=='.' or s[i]=='?' or s[i]=='!'){
			str+=s[i];
			gap[n] = str;
			n++;
			str = "";
		}else{
			str += s[i]; 
		}
	}
	cout<<endl<<endl<<"Juft orindagi gaplar"<<endl;
	yoz<<"Juft orindagi gaplar"<<endl;
	for(int i=1; i<n; i++){
		if(i%2==0){
			cout<<"m["<<i<<"]="<<gap[i]<<endl;
			yoz<<"m["<<i<<"]="<<gap[i]<<endl;
		}
	}
	
	cout<<endl<<"Toq o'rindagi gaplar"<<endl;
	yoz<<endl<<"Toq o'rindagi gaplar"<<endl;
	for(int i=1; i<n; i++){
		if(i%2==1){
			cout<<"m["<<i<<"]="<<gap[i]<<endl;
			yoz<<"m["<<i<<"]="<<gap[i]<<endl;
		}
	}

}