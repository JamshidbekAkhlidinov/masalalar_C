#include<iostream>
using namespace std;
class kollej{
	public:
		string kollej_nomi;
		string direktor;
		int oquvchi_s;
		int oqtuvchi_s;
};

class maktab{
	public:
		string maktab_nomi;
		string direktor;
		int oquvchi_s;
		int oqtuvchi_s;
};

void kirit1(kollej k[], int n){
	for(int i=0; i<n; i++){
	cout<<"kollej_nomi =>"; cin>>k[i].kollej_nomi;
	cout<<"direktor =>";cin>>k[i].direktor;
	cout<<"oquvchi_s  =>";cin>>k[i].oquvchi_s;
	cout<<"oqtuvchi_s =>";cin>>k[i].oqtuvchi_s;	
	cout<<endl;
	}
}

void kirit2(maktab m[], int n){
	for(int i=0; i<n; i++){
	cout<<"Maktab_nomi =>";cin>>m[i].maktab_nomi;
	cout<<"direktor =>";cin>>m[i].direktor;
	cout<<"oquvchi_s  =>";cin>>m[i].oquvchi_s;
	cout<<"oqtuvchi_s =>";cin>>m[i].oqtuvchi_s;	
	cout<<endl;
	}
}

void chiqar(maktab m[],kollej k[],  int n){
	for(int i=0; i<n; i++){
	if(m[i].maktab_nomi==k[i].kollej_nomi or m[i].direktor==k[i].direktor or m[i].oquvchi_s==k[i].oquvchi_s or m[i].oqtuvchi_s==k[i].oqtuvchi_s) {
	cout<<"kollej_nomi =>"<<m[i].maktab_nomi<<endl;
	cout<<"direktor =>"<<m[i].direktor<<endl;
	cout<<"oquvchi_s  =>"<<m[i].oquvchi_s<<endl;
	cout<<"oqtuvchi_s =>"<<m[i].oqtuvchi_s<<endl;
}
	}
}

int main(){
	int n;
	cout<<"N=";
	cin>>n;
	kollej k[n];
	maktab m[n];
	cout<<"Kollejlarni kiriting\n";
	kirit1(k,n);
	cout<<"Maktablarni kiriting\n";
	kirit2(m,n);
	
	cout<<"Bir xillari chiqarildi\n";
	chiqar(m,k,n);
	
	
}