#include<iostream>
using namespace std;
class mijoz{
public:
string ismi, familyasi, xarid_kuni;
int narsalari_soni, xarajati;
};
void yozish(mijoz mijoz[], int n){
for (int k=0; k<n; k++){
cout<<"Ismi = ";
cin>>mijoz[k].ismi;
cout<<"familyasi = ";
cin>>mijoz[k].familyasi;
cout<<"narsalar_soni = ";
cin>>mijoz[k].narsalari_soni;
cout<<"xarajati = ";
cin>>mijoz[k].xarajati;
cout<<"xarid_kuni = ";
cin>>mijoz[k].xarid_kuni;
cout<<endl;
}
}
void oqish(mijoz mijoz[], int n){
for (int k=0; k<n; k++){
cout<<"ismi = "<<mijoz[k].ismi<<endl;
cout<<"familyasi = "<<mijoz[k].familyasi<<endl;
cout<<"narsalari_soni = "<<mijoz[k].narsalari_soni<<endl;
cout<<"xarajati = "<<mijoz[k].xarajati<<endl;
cout<<"xarid_kuni = "<<mijoz[k].xarid_kuni<<endl;
cout<<endl;
}
}
int main(){
int n;
cout<<"Ma'lumotlar soni = "; cin>>n;
mijoz a[n];
cout<<endl;
yozish(a,n);
cout<<endl<<"Kiritilgan ma'lumotlar\n";
oqish(a,n);
}