#include <iostream>
using namespace std;
class gurux{
	public:
		string ism;
		string fam;
		int boyi;

};
void kiritish(gurux a[], int n){
	for(int i=0; i<n; i++){
		cout<<"Ismi "; cin>>a[i].ism;
		cout<<"Familiyasi "; cin>>a[i].fam;
		cout<<"Bo'yi"; cin>>a[i].boyi;
			
	}
}
void chiqarish(gurux a[], int n){
	int max = a[0].boyi;
	int p=0;
	for(int i=0; i<n; i++){
		if(max<a[i].boyi){
			max = a[i].boyi;
			p =i;
		}	
	}
		cout<<"Eng boyi uzuni\n";
		cout<<"\nIsmi "<<a[p].ism;
		cout<<"\nFamiliyasi "<<a[p].fam;
		cout<<"\nBo'yi "<<a[p].boyi;	
	cout<<endl<<endl;
}
int main(){
	int n;
	cout<<"N="; cin>>n;
	gurux a[n];
	kiritish(a,n);
	chiqarish(a,n);
	
}

