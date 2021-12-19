#include <iostream>
using namespace std;
class Telefon{
	public:
		string Telefon_nomi;
		string  Kompanyasi;
		int soni;
		int yili;
};

class Notebook{
	public:
		string Notebook_nomi;
		string  Kompaniyasi;
		int soni;
		int yili;
};
	
void kirit1(Telefon k[], int n){
	for(int i=0; i<n; i++){
	cout<<"Telefon nomi =>"; cin>>k[i].Telefon_nomi;
	cout<<"Kompaniyasi =>";cin>>k[i].Kompanyasi;
	cout<<"Telefonlar soni =>";cin>>k[i].soni;
	cout<<"Chiqarilgan yili =>";cin>>k[i].yili;	
	cout<<endl;
	}
}

void kirit2(Notebook m[], int n){
	for(int i=0; i<n; i++){
	cout<<"Notebook nomi =>"; cin>>m[i].Notebook_nomi;
	cout<<"Kompaniyasi =>";cin>>m[i].Kompaniyasi;
	cout<<"Notebook soni =>";cin>>m[i].soni;
	cout<<"Chiqarilgan yili =>";cin>>m[i].yili;	
	cout<<endl;
	}
}

void chiqar(Telefon m[], Notebook k[],  int n){
	for(int i=0; i<n; i++){
	if(m[i].Telefon_nomi==k[i].Notebook_nomi or m[i].Kompanyasi==k[i].Kompaniyasi or m[i].soni==k[i].soni or m[i].yili==k[i].yili) {
	cout<<"Notebook nomi =>"<<k[i].Notebook_nomi;
	cout<<"Kompaniyasi =>"<<k[i].Kompaniyasi;
	cout<<"Notebook soni =>"<<k[i].soni;
	cout<<"Chiqarilgan yili =>"<<k[i].yili;	
	cout<<endl;
	}
	}
}



int main(){
	int n;
	cout<<"n=";
	cin>>n;
	Notebook k[n];
	Telefon m[n];
	cout<<"Telefon kiriting\n";
	kirit1(m,n);
	cout<<"Kampyuter kiriting\n";
	kirit2(k,n);
	cout<<"Bir xillari chiqarildi\n";
	chiqar(m,k,n);
}
						