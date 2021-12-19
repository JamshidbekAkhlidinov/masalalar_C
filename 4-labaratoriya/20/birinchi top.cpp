#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	string s; int t=1,sum=0;;
	ifstream oqi("output.txt");
	while(getline(oqi,s)){
		cout<<t<<" => "<<s<<"  ->"<<s.length()<<endl;
		t++; sum += s.length();
	}
	
	
	cout<<"Satr =>"<<t-1<<" Belgilar somi "<<sum;
}