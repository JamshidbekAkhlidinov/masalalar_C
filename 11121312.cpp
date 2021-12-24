#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	ifstream oqi("output1.txt");
	ofstream yoz("input1.txt");
	string a,b;
	cout<<"a="; getline(oqi,a); cout<<a<<endl;
	cout<<"b="; cin>>b;

if(a.find(b)!=0){
	cout<<"Bor";
	yoz<<"bor";
}else{
	cout<<"yoq";
	yoz<<"yoq";
}
}