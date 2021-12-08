#include <iostream>
using namespace std;
int kecha(int n){
	int k;
	string p[7] = {"Dushanba", "Seshanba","Chorshanba","Payshanba","Juma","SHnaba","Yakshanba"};
	cout<<"Bugun "<<p[n-1];
	cout<<"\nKecha "<<p[n-2];
}

int main(){
	int n;
		cout<<"n="; cin>>n;
		kecha(n);
		cout<<endl;
		cout<<"n="; cin>>n;
		kecha(n);
		cout<<endl;
		cout<<"n="; cin>>n;
		kecha(n);
		
}