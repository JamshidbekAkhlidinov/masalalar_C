#include <iostream>

using namespace std;

class bayramlar{
	public:
		int kun;
		string nomi;
};

void kirit(bayramlar a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Bayram kuni =>"; cin>>a[i].kun;
	cout<<"Bayram nomi =>";cin>>a[i].nomi;
	cout<<endl;
	}
}

void chiqar(bayramlar a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Bayram kuni =>"<<a[i].kun<<endl;
	cout<<"Bayram nomi =>"<<a[i].nomi<<endl;
}

}

int main(){
	int n,i;
	cin>>n;
	bayramlar a[n];
	kirit(a,n);
	cout<<"\n\nBayramlar ";
	chiqar(a,n);	
	return 0;
}
