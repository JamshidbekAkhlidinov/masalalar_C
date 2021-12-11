#include <iostream>

using namespace std;

class UyKutubxonasi{
	public:
		string nomi;
		int beti;
};

void kirit(UyKutubxonasi a[], int n){
	for(int i=0; i<n; i++){
	cout<<"nomi =>"; cin>>a[i].nomi;
	cout<<"beti =>";cin>>a[i].beti;
	cout<<endl;
	}
}

void chiqar(UyKutubxonasi a[], int n){
	for(int i=0; i<n; i++){
	cout<<"nomi =>"<<a[i].nomi<<endl;
	cout<<"beti =>"<<a[i].beti<<endl;
}

}

int main(){
	int n,i;
	cout<<"Nechta kutubxona N=";
	cin>>n;
	UyKutubxonasi a[n];
	kirit(a,n);
	cout<<"\n\nKutubxona\n";
	chiqar(a,n);	
	return 0;
}
