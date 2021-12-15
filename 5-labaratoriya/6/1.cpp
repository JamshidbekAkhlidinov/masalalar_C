#include <iostream>
using namespace std;

class piyola{
	public:
		string nomi;
		int massasi;
		int id;
};

class choynak{
	public:
		string nomi;
		int massasi;
		int id;
};

int main(){
	piyola piyola;
	choynak choynak;
	piyola.id = 1;
	piyola.nomi = "Madonna";
	piyola.massasi = 250;
	choynak.id = 2;
	choynak.nomi = "Madonna";
	choynak.massasi = 5000;
	
	cout<<"Piyola\n";
	cout<<"Id =>"<<piyola.id<<endl;
	cout<<"Nomi =>"<<piyola.nomi<<endl;
	cout<<"Massasi =>"<<piyola.massasi<<endl;

	cout<<"Choynak\n";
	cout<<"Id =>"<<choynak.id<<endl;
	cout<<"Nomi =>"<<choynak.nomi<<endl;
	cout<<"Massasi =>"<<choynak.massasi<<endl;	
}