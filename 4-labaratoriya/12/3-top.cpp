#include <iostream>
using namespace std;
class AEROFLOT {
	public:
		int reys_nomeri;
		string reysning_manzili;
		string samolet_turi;
};

void kirit(AEROFLOT  a[], int n){
	for(int i=0; i<n; i++){
	cout<<"reys_nomeri =>"; cin>>a[i].reys_nomeri;
	cout<<"reysning_manzili =>";cin>>a[i].reysning_manzili;
	cout<<"samolet_turi  =>";cin>>a[i].samolet_turi;
	cout<<endl;
	}
}

void chiqar(AEROFLOT  a[], int n){
	for(int i=0; i<n; i++){
	cout<<"reys_nomeri =>"<<a[i].reys_nomeri<<endl;
	cout<<"reysning_manzili =>"<<a[i].reysning_manzili<<endl;
	cout<<"samolet_turi  =>"<<a[i].samolet_turi<<endl;
}

}

int main(){
	int n,i;
	cin>>n;
	AEROFLOT  a[n];
	kirit(a,n);
	cout<<"\nAEROFLOT\n";
	chiqar(a,n);	
	return 0;
}
