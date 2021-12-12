#include <iostream>
using namespace std;
class Dars{
	public:
		string fan_n;
		string oqituvchi;
		int max_baxo;
		char dars_v[20];
};
void kiritish(Dars a[], int n){
	for(int i=0; i<n; i++){
		cout<<"Fan nomi "; cin>>a[i].fan_n;
		cout<<"O'qituvchi "; cin>>a[i].oqituvchi;
		cout<<"Maxsimal baho "; cin>>a[i].max_baxo;
		cout<<"Dars vaqti "; cin>>a[i].dars_v;		
	}
}
void chiqarish(Dars a[], int n){
	cout<<"\n\nDarslar";
	for(int i=0; i<n; i++){
		cout<<"\nFan nomi "<<a[i].fan_n;
		cout<<"\nO'qituvchi "<<a[i].oqituvchi;
		cout<<"\nMaxsimal baho "<<a[i].max_baxo;
		cout<<"\nDars vaqti "<<a[i].dars_v;		
	}
	cout<<endl<<endl;
}
int main(){
	int n;
	cout<<"N="; cin>>n;
	Dars a[n];
	kiritish(a,n);
	chiqarish(a,n);
	
}

