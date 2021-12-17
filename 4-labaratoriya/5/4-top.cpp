#include<iostream>
using namespace std;
class Firma {
	public:
		string ism,fam;
		int yosh;
};
	
	void yoz(Firma firma[], int n){
			for (int k=0; k<n; k++){
				cout<<"Ism =>"; cin>>firma[k].ism;
				cout<<"Familiya =>"; cin>>firma[k].fam;
				cout<<"Yosh =>"; cin>>firma[k].yosh;
		
				cout<<endl;
			}
	}

	void oqi(Firma firma[], int n){
				for (int k=0; k<n; k++){
				if(firma[k].fam=="Abdullaev" or firma[k].fam=="Abduazizov" or firma[k].fam=="Abdualimov "){
				cout<<"Ismi =>"<<firma[k].ism<<endl;
				cout<<"Familiyasi =>"<<firma[k].fam<<endl;
				cout<<"Yoshi =>"<<firma[k].yosh<<endl;
				cout<<endl;
				}else{
				cout<<"Bunday odamlar yoq\n";
			
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