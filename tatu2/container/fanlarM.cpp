#include<iostream>
#include<string.h>
using namespace std;

	class fanlar{
		public:
			string nomi,oqituvchiFIO,fan_nomi;
			int tort_soni,uch_soni,besh_soni,o_soni;
			
			void kiritish(fanlar a[], int n){
				for ( int i=1; i<=n; i++){
					cout<<i<<"- ma'lumot\n";
					cout<<"Nomi "; cin>>a[i].nomi;
					cout<<"oqituvchiFIO "; cin>>a[i].oqituvchiFIO;
					cout<<"uch_soni "; cin>>a[i].uch_soni;
					cout<<"tort_soni "; cin>>a[i].tort_soni;
					cout<<"besh_soni "; cin>>a[i].besh_soni;
					cout<<"o_soni "; cin>>a[i].o_soni;
					
				}
			}
			
		void chiqarish(fanlar a[], int n){
			string qidir;
			int qidir2;
			cout<<"Nimsi qidirmoqchisiz?\n1- Nomi\n2- oqituvchiFIO, \n3 - uch_soni, \n4- tort_soni, \n5- besh_soni, \n6-o_soni\n\nn=";
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
					    cout<<"oqituvchiFIO "<<a[i].oqituvchiFIO<<endl;
						cout<<"uch_soni "<<a[i].uch_soni<<endl;
						cout<<"tort_soni "<<a[i].tort_soni<<endl;
						cout<<"besh_soni "<<a[i].besh_soni<<endl;
						cout<<"o_soni "<<a[i].o_soni<<endl<<endl;
					}
				}
				break;

			case 2:
				cout<<"Qidirish uchun oqituvchiFIO kiriting! "; cin>>qidir;
				for(int i=1; i<=n; i++){
					if(qidir==a[i].oqituvchiFIO){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
					    cout<<"oqituvchiFIO "<<a[i].oqituvchiFIO<<endl;
						cout<<"uch_soni "<<a[i].uch_soni<<endl;
						cout<<"tort_soni "<<a[i].tort_soni<<endl;
						cout<<"besh_soni "<<a[i].besh_soni<<endl;
						cout<<"o_soni "<<a[i].o_soni<<endl<<endl;
					}
				}
				break;
			case 3:
				cout<<"Qidirish uchun uch_soni kiriting! "; cin>>qidir2;
				for(int i=1; i<=n; i++){
					if(qidir2==a[i].uch_soni){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
					    cout<<"oqituvchiFIO "<<a[i].oqituvchiFIO<<endl;
						cout<<"uch_soni "<<a[i].uch_soni<<endl;
						cout<<"tort_soni "<<a[i].tort_soni<<endl;
						cout<<"besh_soni "<<a[i].besh_soni<<endl;
						cout<<"o_soni "<<a[i].o_soni<<endl<<endl;
					}
				}
				break;
			case 4:
				cout<<"Qidirish uchun tort_soni kiriting! "; cin>>qidir2;
				for(int i=1; i<=n; i++){
					if(qidir2==a[i].tort_soni){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
					    cout<<"oqituvchiFIO "<<a[i].oqituvchiFIO<<endl;
						cout<<"uch_soni "<<a[i].uch_soni<<endl;
						cout<<"tort_soni "<<a[i].tort_soni<<endl;
						cout<<"besh_soni "<<a[i].besh_soni<<endl;
						cout<<"o_soni "<<a[i].o_soni<<endl<<endl;
					}
				}
				break;
			case 5:
				cout<<"Qidirish uchun besh_soni kiriting! "; cin>>qidir2;
				for(int i=1; i<=n; i++){
					if(qidir2==a[i].besh_soni){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
					    cout<<"oqituvchiFIO "<<a[i].oqituvchiFIO<<endl;
						cout<<"uch_soni "<<a[i].uch_soni<<endl;
						cout<<"tort_soni "<<a[i].tort_soni<<endl;
						cout<<"besh_soni "<<a[i].besh_soni<<endl;
						cout<<"o_soni "<<a[i].o_soni<<endl<<endl;
					}
				}
				break;
			case 6:
				cout<<"Qidirish uchun o_soni kiriting! "; cin>>qidir2;
				for(int i=1; i<=n; i++){
					if(qidir2==a[i].o_soni){
						cout<<i<<"- ma'lumot\n";
						cout<<"Nomi "<<a[i].nomi<<endl;
					    cout<<"oqituvchiFIO "<<a[i].oqituvchiFIO<<endl;
						cout<<"uch_soni "<<a[i].uch_soni<<endl;
						cout<<"tort_soni "<<a[i].tort_soni<<endl;
						cout<<"besh_soni "<<a[i].besh_soni<<endl;
						cout<<"o_soni "<<a[i].o_soni<<endl<<endl;
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
	fanlar cup[20];
	cup[20].kiritish(cup,n);
	cup[20].chiqarish(cup,n);
	return 0;	
	
}