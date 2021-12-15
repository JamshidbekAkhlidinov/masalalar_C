#include <iostream>
using namespace std;

class ISHCHI{
	public:
		string familiya;
		string lavozim;
		int ishga_kirgan;
};

void kirit(ISHCHI a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Familiya =>"; cin>>a[i].familiya;
	cout<<"Lavozim =>";cin>>a[i].lavozim;
	cout<<"Ishga kirgan yil  =>";cin>>a[i].ishga_kirgan;

	cout<<endl;
	}
}

void chiqar(ISHCHI a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Familiya =>"<<a[i].familiya<<endl;
	cout<<"Lavozim =>"<<a[i].lavozim<<endl;
	cout<<"Ishga kirgan yili  =>"<<a[i].ishga_kirgan<<endl;

}

}

int main(){
	int n,i;
	cin>>n;
	ISHCHI a[n];
	kirit(a,n);
	cout<<"\n\nIshchilar ";
	chiqar(a,n);	
	return 0;
}
