#include <iostream>

using namespace std;

class parallelopeped{
	public:
		int diaganal;
		int radiusi;
		int yuzi;
		
};

void kirit(parallelopeped a[], int n){
	for(int i=0; i<n; i++){
	cout<<"diaganal  =>"; cin>>a[i].diaganal;
	cout<<"radiusi =>";cin>>a[i].radiusi;
	cout<<"yuzi  =>";cin>>a[i].yuzi;
	cout<<endl;
	}
}

void chiqar(parallelopeped a[], int n){
	for(int i=0; i<n; i++){
	cout<<"diaganal =>"<<a[i].diaganal<<endl;
	cout<<"radiusi =>"<<a[i].radiusi<<endl;
	cout<<"yuzi  =>"<<a[i].yuzi<<endl;

}

}

int main(){
	int n,i;
	cin>>n;
	parallelopeped a[n];
	kirit(a,n);
	cout<<"\n\nParallelopeped\n";
	chiqar(a,n);	
	return 0;
}
