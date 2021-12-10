#include <iostream>

using namespace std;

class KlaviaturaVaSichqoncha{
	public:
		int func;
		int raqam;
		string harf;
		int maxsus;
		int sichqoncha;
};

void kirit(KlaviaturaVaSichqoncha a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Funksional tugmalar  =>"; cin>>a[i].func;
	cout<<"Raqamlar soni =>";cin>>a[i].raqam;
	cout<<"Harflar soni  =>";cin>>a[i].harf;
	cout<<"Maxsus belgilar =>";cin>>a[i].maxsus;
	cout<<"Sichqoncha =>"; cin>>a[i].sichqoncha;
	cout<<endl;
	}
}

void chiqar(KlaviaturaVaSichqoncha a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Funksional tugmalar =>"<<a[i].func<<endl;
	cout<<"Raqamlar soni  =>"<<a[i].raqam<<endl;
	cout<<"Harflar soni  =>"<<a[i].harf<<endl;
	cout<<"Maxsus belgilar =>"<<a[i].maxsus<<endl;
	cout<<"Sichqoncha =>"<<a[i].sichqoncha<<endl;
}

}

int main(){
	int n,i;
	cin>>n;
	KlaviaturaVaSichqoncha a[n];
	kirit(a,n);
	cout<<"\n\nKlaviatura va sichqoncha\n";
	chiqar(a,n);	
	return 0;
}
