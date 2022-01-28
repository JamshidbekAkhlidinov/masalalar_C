#include <iostream>
using namespace std;
class printer{
	public:
		int puli,ogirligi;
		string nomi,rangi,turi;
};
void kirit(printer a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Nomi =>"; cin>>a[i].nomi;
	cout<<"Rangi =>";cin>>a[i].rangi;
	cout<<"Puli =>";cin>>a[i].puli;
	cout<<"Og'irligi =>";cin>>a[i].ogirligi;
	cout<<"Turi =>";cin>>a[i].turi;
	cout<<endl;
	}
}
void chiqar(printer a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Nomi =>"<<a[i].nomi;
	cout<<"\nRangi =>"<<a[i].rangi;
	cout<<"\nPuli =>"<<a[i].puli;
	cout<<"\nOg'irligi =>"<<a[i].ogirligi;
	cout<<"\nTuri =>"<<a[i].turi;
	}
}

int main(){
	int n;
	cin>>n;
	printer a[n];
	kirit(a,n);
	cout<<"\n\nPrinterlar ";
	chiqar(a,n);	
	return 0;
}
