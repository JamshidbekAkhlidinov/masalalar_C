#include <iostream>

using namespace std;

class kutubxona{
	public:
		int kitoblarsoni;
		int kampyutersoni;
		string oqituvchi;
		int parta;
		int doska;
};

void kirit(kutubxona a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Doska =>"; cin>>a[i].doska;
	cout<<"Kampyuter =>";cin>>a[i].kampyutersoni;
	cout<<"Kitoblar  =>";cin>>a[i].kitoblarsoni;
	cout<<"O'qituvchi =>";cin>>a[i].oqituvchi;
	cout<<"Parta =>"; cin>>a[i].parta;	
	cout<<endl;
	}
}

void chiqar(kutubxona a[], int n){
	for(int i=0; i<n; i++){
	cout<<"Doska =>"<<a[i].doska<<endl;
	cout<<"Kampyuter =>"<<a[i].kampyutersoni<<endl;
	cout<<"Kitoblar  =>"<<a[i].kitoblarsoni<<endl;
	cout<<"O'qituvchi =>"<<a[i].oqituvchi<<endl;
	cout<<"Parta =>"<<a[i].parta<<endl;
}

}

int main(){
	int n,i;
	cin>>n;
	kutubxona a[n];
	kirit(a,n);
	cin>>"\n\nKutubxonaaaa ";
	chiqar(a,n);	
	return 0;
}
