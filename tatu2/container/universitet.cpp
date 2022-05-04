#include<iostream>
#include<string.h>
using namespace std;

	class universitet{
		public:
			string nomi,rektorFIO;
			int x_soni,f_soni,t_soni,p_soni;
			
			void kiritish(universitet a[], int n){
				for ( int i=1; i<=n; i++){
					cout<<i<<"- ma'lumot\n";
					cout<<"Nomi "; cin>>a[i].nomi;
					cout<<"rektorFIO "; cin>>a[i].rektorFIO;
					cout<<"f_soni "; cin>>a[i].f_soni;
					cout<<"x_soni "; cin>>a[i].x_soni;
					cout<<"t_soni "; cin>>a[i].t_soni;
					cout<<"p_soni "; cin>>a[i].p_soni;
					
				}
			}
			
		void chiqarish(universitet a[], int n){
			string qidir;
			int qidir2;
			cout<<"Nimsi qidirmoqchisiz?\n1- Nomi\n2- rektorFIO, \n3 - f_soni, \n4- x_soni, \n5- t_soni, \n6-p_soni\n\nn=";
			int q;
			cin>>q;
			switch (q)
			{
			case 1:
				cout<<"Qidirish uchun nomni kiriting! "; cin>>qidir;
				for(int i=1; i<=n; i++){
					if(qidir==a[i].nomi){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
						cout<<"rektorFIO "<<a[i].rektorFIO<<endl;
						cout<<"f_soni "<<a[i].f_soni<<endl;
						cout<<"x_soni "<<a[i].x_soni<<endl;
						cout<<"t_soni "<<a[i].t_soni<<endl;
						cout<<"p_soni "<<a[i].p_soni<<endl<<endl;
					}
				}
				break;

			case 2:
				cout<<"Qidirish uchun rektorFIO kiriting! "; cin>>qidir;
				for(int i=1; i<=n; i++){
					if(qidir==a[i].rektorFIO){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
						cout<<"rektorFIO "<<a[i].rektorFIO<<endl;
						cout<<"f_soni "<<a[i].f_soni<<endl;
						cout<<"x_soni "<<a[i].x_soni<<endl;
						cout<<"t_soni "<<a[i].t_soni<<endl;
						cout<<"p_soni "<<a[i].p_soni<<endl<<endl;
					}
				}
				break;
			case 3:
				cout<<"Qidirish uchun f_soni kiriting! "; cin>>qidir2;
				for(int i=1; i<=n; i++){
					if(qidir2==a[i].f_soni){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
						cout<<"rektorFIO "<<a[i].rektorFIO<<endl;
						cout<<"f_soni "<<a[i].f_soni<<endl;
						cout<<"x_soni "<<a[i].x_soni<<endl;
						cout<<"t_soni "<<a[i].t_soni<<endl;
						cout<<"p_soni "<<a[i].p_soni<<endl<<endl;
					}
				}
				break;
			case 4:
				cout<<"Qidirish uchun x_soni kiriting! "; cin>>qidir2;
				for(int i=1; i<=n; i++){
					if(qidir2==a[i].x_soni){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
						cout<<"rektorFIO "<<a[i].rektorFIO<<endl;
						cout<<"f_soni "<<a[i].f_soni<<endl;
						cout<<"x_soni "<<a[i].x_soni<<endl;
						cout<<"t_soni "<<a[i].t_soni<<endl;
						cout<<"p_soni "<<a[i].p_soni<<endl<<endl;
					}
				}
				break;
			case 5:
				cout<<"Qidirish uchun t_soni kiriting! "; cin>>qidir2;
				for(int i=1; i<=n; i++){
					if(qidir2==a[i].t_soni){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
						cout<<"rektorFIO "<<a[i].rektorFIO<<endl;
						cout<<"f_soni "<<a[i].f_soni<<endl;
						cout<<"x_soni "<<a[i].x_soni<<endl;
						cout<<"t_soni "<<a[i].t_soni<<endl;
						cout<<"p_soni "<<a[i].p_soni<<endl<<endl;
					}
				}
				break;
			case 6:
				cout<<"Qidirish uchun p_soni kiriting! "; cin>>qidir2;
				for(int i=1; i<=n; i++){
					if(qidir2==a[i].p_soni){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
						cout<<"rektorFIO "<<a[i].rektorFIO<<endl;
						cout<<"f_soni "<<a[i].f_soni<<endl;
						cout<<"x_soni "<<a[i].x_soni<<endl;
						cout<<"t_soni "<<a[i].t_soni<<endl;
						cout<<"p_soni "<<a[i].p_soni<<endl<<endl;
					}
				}
				break;
			
			default:
				cout<<"Noto'gri buyruq kiritildi";
				break;
			}
		}	

		
					
		};
		

int main(){
	int n;
	string qidir;
	cout<<"Nechta ma'lumot kiritmoqchisiz? "<<endl;
	cin>>n;
	universitet cup[20];
	cup[20].kiritish(cup,n);
	cup[20].chiqarish(cup,n);
	return 0;	
	
}