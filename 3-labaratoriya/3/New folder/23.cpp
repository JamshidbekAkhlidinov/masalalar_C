#include <iostream>

using namespace std;

class matematika{
	public:
		int vazifa;
		string ustoz;
		string xona;
		int sinf;
};

void kirit(matematika a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Ustoz  =>"; cin>>a[i].ustoz;
	cout<<"Xona =>";cin>>a[i].xona;
	cout<<"Sinf  =>";cin>>a[i].sinf;
	cout<<"Vazifa =>";cin>>a[i].vazifa;
	cout<<endl;
	}
}

void chiqar(matematika a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Ustoz =>"<<a[i].ustoz<<endl;
	cout<<"Xona =>"<<a[i].xona<<endl;
	cout<<"Sinf  =>"<<a[i].sinf<<endl;
	cout<<"Vazifa =>"<<a[i].vazifa<<endl;
}

}

int main(){
	int n,i;
	cin>>n;
	matematika a[n];
	kirit(a,n);
	cout<<"\n\nMatematika\n";
	chiqar(a,n);	
	return 0;
}


