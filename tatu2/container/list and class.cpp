#include <iostream>
#include <list>
using namespace std;

class poyezd{
	public:
		string nomi;
		float tezligi,uzunligi;
};



void kirit(poyezd a[], int n){
	for(int i=0; i<n; i++){
		cout<<"Nomi =>"; cin>>a[i].nomi;
		cout<<"Tezligi =>";cin>>a[i].tezligi;
		cout<<"uzunligi =>"; cin>>a[i].uzunligi;
		
		cout<<endl;
	}
}

void sarala(poyezd a[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[i].uzunligi>a[j].uzunligi){
				swap(a[i],a[j]);
			}
		}
	}
}

void chiqar(poyezd a[], int n){
	for(int i=0; i<n; i++){
		cout<<"Nomi =>"<<a[i].nomi<<endl;
		cout<<"Tezligi =>"<<a[i].tezligi<<endl;
		cout<<"uzunligi =>"<<a[i].uzunligi<<endl<<endl;
	}
}

int main(){
	int n,i;
	cin>>n;
	poyezd a[n];
	kirit(a,n);
	cout<<"\n\nSaralangan chiqarish \n";
	sarala(a,n);
	chiqar(a,n);	
}