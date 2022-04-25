#include<iostream>
#include<string.h>
using namespace std;
namespace abs1{
	class piyola{
		public:
			char tur[20];
			int narxi;
			int yili;
			
			void kiritish(piyola a[], int n){
				for ( int i=1; i<=n; i++){
					cout<<i<<"- ma'lumot\n";
					cout<<"Turi "; cin>>a[i].tur;
					cout<<"Narxi "; cin>>a[i].narxi;
					cout<<"Yili "; cin>>a[i].yili;
				}
			}
			void saralash(piyola a[], int n){
				for(int i=1; i<=n; i++){
					for(int j=1; j<=n; j++){
						if(a[i].narxi>a[i].narxi){
							swap(a[i].narxi,a[j].narxi);
						}
					}
				}
			}
		void chiqarish(piyola a[], int n){
			string qidir;
			cout<<"Qidirish uchun nomni kiriting! "; cin>>qidir;
			for(int i=1; i<=n; i++){
				if(qidir==a[i].tur){
					cout<<i<<"- ma'lumot";
					cout<<"Turi "<<a[i].tur<<endl;
					cout<<"Narxi "<<a[i].narxi<<endl;
					cout<<"Yili "<<a[i].yili<<endl;
				}
				
			}
		}	
			
			
		};
		
}
using namespace abs1;
int main(){
int n;
string qidir;
cout<<"Nechta ma'lumot kiritmoqchisiz? "<<endl;
cin>>n;
piyola cup[20];
cup[20].kiritish(cup,n);
cup[20].saralash(cup,n);
cup[20].chiqarish(cup,n);
return 0;	
	
}