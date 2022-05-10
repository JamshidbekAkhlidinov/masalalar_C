#include<iostream>
#include<string.h>
using namespace std;
namespace OdilUzqov{
	class fleshka{
		public:
			string ishlab_chiqarivchi;
			int narxi;
			float tezligi;
			int xotirasi;
			
			void kiritish(fleshka a[], int n){
				for ( int i=1; i<=n; i++){
					cout<<endl<<i<<"- ma'lumot\n";
					cout<<"ishlab_chiqarivchi "; cin>>a[i].ishlab_chiqarivchi;
					cout<<"Narxi "; cin>>a[i].narxi;
					cout<<"xotirasi "; cin>>a[i].xotirasi;
					cout<<"tezligi "; cin>>a[i].tezligi;
				}
			}
			void saralash(fleshka a[], int n){
				for(int i=1; i<=n; i++){
					for(int j=1; j<=n; j++){
						if(a[i].narxi>a[i].narxi){
							swap(a[i].narxi,a[j].narxi);
						}
					}
				}
			}
		void chiqarish(fleshka a[], int n){
			int qidir;
			cout<<"\nQidirish uchun xotirasini kiriting! "; cin>>qidir;
			for(int i=1; i<=n; i++){
				if(qidir==a[i].xotirasi){
					cout<<endl<<i<<"- ma'lumot\n";
					cout<<"ishlab_chiqarivchi "<<a[i].ishlab_chiqarivchi<<endl;
					cout<<"Narxi "<<a[i].narxi<<endl;
					cout<<"xotirasi "<<a[i].xotirasi<<endl;
					cout<<"tezligi "<<a[i].tezligi<<endl;
				}
				
			}
		}	
			
			
		};
		
}
using namespace OdilUzqov;
int main(){
int n;
string qidir;
cout<<"Nechta ma'lumot kiritmoqchisiz? "<<endl;
cin>>n;
fleshka cup[20];
cup[20].kiritish(cup,n);
cup[20].saralash(cup,n);
cup[20].chiqarish(cup,n);
return 0;	
	
}