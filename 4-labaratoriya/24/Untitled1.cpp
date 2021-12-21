#include<iostream>
using namespace std;
class Hayvonlar {
	public:
		string nomi,turi,jinsi;
		int vazni,boyi;
};
	void yoz(Hayvonlar Hayvonlar[], int n){
			for (int k=0; k<n; k++){
				cout<<"turi =>"; cin>>Hayvonlar[k].turi;
				cout<<"jinsi =>"; cin>>Hayvonlar[k].jinsi;
				cout<<"vazni =>"; cin>>Hayvonlar[k].vazni;
				cout<<"boyi =>"; cin>>Hayvonlar[k].boyi;
				cout<<endl;
			}
	}

	void oqi(Hayvonlar Hayvonlar[], int n){
				int buyil = 2021;
				for (int k=0; k<n; k++){
				cout<<"turi =>"<<Hayvonlar[k].turi<<endl;
				cout<<"jinsi =>"<<Hayvonlar[k].jinsi<<endl;
				cout<<"Vazini =>"<<Hayvonlar[k].vazni<<endl;
				cout<<"boyi =>"<<Hayvonlar[k].boyi<<endl;
				cout<<endl;
			}
	}
	


int main(){
	int n;
	cout<<"Nechta malumot kiritmoqchisiz? "; cin>>n;
	Hayvonlar a[n];
	cout<<endl;
	yoz(a,n);
	cout<<endl<<"Kiritilgan malumotlar\n";
	oqi(a,n);

}