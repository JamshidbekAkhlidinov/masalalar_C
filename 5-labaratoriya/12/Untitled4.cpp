#include <iostream>

using namespace std;

class Computers{
	public:
		string nomi;
		string protsessor;
		int xotira;
};

void kirit(Computers a[], int n){
	for(int i=0; i<n; i++){
	cout<<"nomi =>"; cin>>a[i].nomi;
	cout<<"protsessor =>";cin>>a[i].protsessor;
	cout<<"xotira =>";cin>>a[i].xotira;
	
	cout<<endl;
	}
}

void chiqar(Computers a[], int n){
	for(int i=0; i<n; i++){
		if(a[i].xotira>250){
			cout<<"nomi =>"<<a[i].nomi<<endl;
			cout<<"protsessor =>"<<a[i].protsessor<<endl;
			cout<<"xotira =>"<<a[i].xotira<<endl;
		}

}

}

int main(){
	int n,i;
	cout<<"n=";
	cin>>n;
	Computers a[n];
	kirit(a,n);
	cout<<"\nKampyuterlar\n";
	chiqar(a,n);	
	return 0;
}
