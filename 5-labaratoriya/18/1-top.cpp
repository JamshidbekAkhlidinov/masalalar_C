#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	int k; cout<<"k="; cin>>k;
	string s,l[20]; int t=0;
	ifstream oqi("text.txt");
	while(getline(oqi,s)){
		t++;
		cout<<t<<" => "<<s<<endl;
		l[t] = s;
	}
cout<<endl<<t<<" => ta satr bor\n";

for(int i=t-k; i>0; i--){
	cout<<t-k-i+1<<" => "<<l[t-k-i+1]<<endl;
}
}