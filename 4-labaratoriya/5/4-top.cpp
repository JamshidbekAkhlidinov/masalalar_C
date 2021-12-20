#include<iostream>
using namespace std;
class Firma {
	public:
		string ism,fam;
		int oy,yil;
};
	
	void yoz(Firma firma[], int n){
			for (int k=0; k<n; k++){
				cout<<"Ism =>"; cin>>firma[k].ism;
				cout<<"Familiya =>"; cin>>firma[k].fam;
				cout<<"Qabul qilingan oy =>"; cin>>firma[k].oy;
				cout<<"Qabul qilingan yil =>"; cin>>firma[k].yil;
				cout<<endl;
			}
	}

	void oqi(Firma firma[], int n){
				int buyil = 2021;
				for (int k=0; k<n; k++){
				if(buyil - firma[k].yil>3){
				cout<<"Ismi =>"<<firma[k].ism<<endl;
				cout<<"Familiyasi =>"<<firma[k].fam<<endl;
				cout<<"Qabul qilingan oy =>"<<firma[k].oy<<endl;
				cout<<"Qabul qilingan yil =>"<<firma[k].yil<<endl;
				cout<<endl;
				}
			}
	}
	


int main(){
	int n;
	cout<<"Nechta malumot kiritmoqchisiz? "; cin>>n;
	Firma a[n];
	cout<<endl;
	yoz(a,n);
	cout<<endl<<"Kiritilgan malumotlar\n";
	oqi(a,n);

}