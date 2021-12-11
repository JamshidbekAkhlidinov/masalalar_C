#include <iostream>

using namespace std;

class NARX{
	public:
		string nomi;
		string magzain_n;
		int narxi;
};

void kirit(NARX a[], int n){
	for(int i=0; i<n; i++){
	cout<<"nomi =>"; cin>>a[i].nomi;
	cout<<"magzain_n =>";cin>>a[i].magzain_n;
	cout<<"narxi  =>";cin>>a[i].narxi;
	cout<<endl;
	}
}

void chiqar(NARX a[], int n){
	for(int i=0; i<n; i++){
	cout<<"nomi =>"<<a[i].nomi<<endl;
	cout<<"magzain_n =>"<<a[i].magzain_n<<endl;
	cout<<"narxi  =>"<<a[i].narxi<<endl;
}

}

int main(){
	int n,i;
	cout<<"Nechta maxsulot N=";
	cin>>n;
	NARX a[n];
	kirit(a,n);
	cout<<"\n\nMaxsulotlar\n";
	chiqar(a,n);	
	return 0;
}
