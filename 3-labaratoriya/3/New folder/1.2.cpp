#include <iostream>

using namespace std;

class haridor{
	public:
		string ism;
		string fam;
		string manzili;
		int tartib;
};

void kirit(haridor a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Ism =>"; cin>>a[i].ism;
	cout<<"Familiya =>";cin>>a[i].fam;
	cout<<"Manzili  =>";cin>>a[i].manzili;
	a[i].tartib = i+1;
	
	cout<<endl;
	}
}

void chiqar(haridor a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Ism =>"<<a[i].ism<<endl;
	cout<<"Familiya =>"<<a[i].fam<<endl;
	cout<<"Manzil  =>"<<a[i].manzili<<endl;
	cout<<"Tartib =>"<<a[i].tartib<<endl;

}

}

int main(){
	int n,i;
	cin>>n;
	haridor a[n];
	kirit(a,n);
	cout<<"\n\nHaridorlar \n";
	chiqar(a,n);	
	return 0;
}
