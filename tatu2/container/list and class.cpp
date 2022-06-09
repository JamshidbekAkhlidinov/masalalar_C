#include <iostream>
#include <list>
using namespace std;

class mashinalar{
	public:
		string nomi;
		float tezligi;
};

class avtobuslar: public mashinalar{
	public:
		int ot_kuchi;
		float yoqilgi_sigimi;
};

void kirit(avtobuslar a[], int n){
	for(int i=0; i<n; i++){
		cout<<"Nomi =>"; cin>>a[i].nomi;
		cout<<"Tezligi =>";cin>>a[i].tezligi;
		cout<<"ot_kuchi =>"; cin>>a[i].ot_kuchi;
		cout<<"yoqilgi_sigimi =>";cin>>a[i].yoqilgi_sigimi;
		
		cout<<endl;
	}
}

void sarala(avtobuslar a[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[i].ot_kuchi>a[j].ot_kuchi){
				swap(a[i],a[j]);
			}
		}
	}
}

void chiqar(avtobuslar a[], int n){
	for(int i=0; i<n; i++){
		cout<<"Nomi =>"<<a[i].nomi<<endl;
		cout<<"Tezligi =>"<<a[i].tezligi<<endl;
		cout<<"ot_kuchi =>"<<a[i].ot_kuchi<<endl;
		cout<<"yoqilgi_sigimi =>"<<a[i].yoqilgi_sigimi<<endl<<endl
		;
	}
}

int main(){
	int n,i;
	cin>>n;
	avtobuslar a[n];
	kirit(a,n);
	cout<<"\n\nSaralangan chiqarish \n";
	sarala(a,n);
	chiqar(a,n);	
}