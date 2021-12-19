#include<iostream>
using namespace std;
class aviareys{
	public:
		string nomi,qayerdan,qayerga;
		int chipta_narxi, soni;
};	
	void yoz(aviareys aviareys[], int n){
			for (int k=0; k<n; k++){
				cout<<"Samaliyot nomi =>"; cin>>aviareys[k].nomi;
				cout<<"Qayerdan =>"; cin>>aviareys[k].qayerdan;
				cout<<"Qayerga =>"; cin>>aviareys[k].qayerga;
				cout<<"Chipta narxi =>"; cin>>aviareys[k].chipta_narxi;
				cout<<"Azolar soni =>"; cin>>aviareys[k].soni;
				cout<<endl;
			}
	}
	void oqi(aviareys aviareys[], int n){
			for (int k=0; k<n; k++){
				cout<<"Samaliyot nomi =>"<<aviareys[k].nomi<<endl;
				cout<<"Qayerdan =>"<<aviareys[k].qayerdan<<endl;
				cout<<"Qayerga =>"<<aviareys[k].qayerga<<endl;
				cout<<"Chipta narxi =>"<<aviareys[k].chipta_narxi<<endl;
				cout<<"Azolar soni =>"<<aviareys[k].soni<<endl;
				cout<<endl;
			}
	}
int main(){
	int n;
	cout<<"Nechta malumot kiritmoqchisiz? "; cin>>n;
	aviareys a[n];
	cout<<endl;
	yoz(a,n);
	cout<<endl<<"Kiritilgan malumotlar\n";
	oqi(a,n);
}