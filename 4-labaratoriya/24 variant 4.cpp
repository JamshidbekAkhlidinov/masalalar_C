#include<iostream>
using namespace std;
class Tovarlar  {
	public:
		string nomi,miqdori;
		int vaqti,narxi;
};
	
	void yoz(Tovarlar  firma[], int n){
			for (int k=0; k<n; k++){
				cout<<"nomi =>"; cin>>firma[k].nomi;
				cout<<"miqdori =>"; cin>>firma[k].miqdori;
				cout<<"vaqti =>"; cin>>firma[k].vaqti;
				cout<<"narxi =>"; cin>>firma[k].narxi;
				cout<<endl;
			}
	}

	void oqi(Tovarlar  firma[], int n){
				for (int k=0; k<n; k++){
				if(firma[k].vaqti>1 and firma[k].narxi>10000){
				cout<<"nomi =>"<<firma[k].nomi<<endl;
				cout<<"miqdori =>"<<firma[k].miqdori<<endl;
				cout<<"vaqti=>"<<firma[k].vaqti<<endl;
				cout<<"narxi =>"<<firma[k].narxi<<endl;
				cout<<endl;
				}
			}
	}
	


int main(){
	int n;
	cout<<"Nechta malumot kiritmoqchisiz? "; cin>>n;
	Tovarlar  a[n];
	cout<<endl;
	yoz(a,n);
	cout<<endl<<"Kiritilgan malumotlar\n";
	oqi(a,n);

}