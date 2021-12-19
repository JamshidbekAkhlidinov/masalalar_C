#include <iostream>
#include <fstream>
using namespace std;
int main(){
//	char a[300];
	string a;
	ifstream oqi("output2.txt");
	ofstream yoz("input2.txt");
	cout<<"Satrni kiritng "; getline(oqi,a); cout<<a<<endl;
	int n;
	string p;
	cout<<"n="; cin>>n;
	for(int i=0; i<=a.length(); i++){
		if(n!=i+1 and n<i+1) {
			p+=a[i];
		}else p+=" ochirilgan ";
		
	}
	cout<<"\n"<<p;
}