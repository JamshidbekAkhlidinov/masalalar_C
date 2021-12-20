#include<iostream>
using namespace std;
class hayvonlar{
 public:
 string nomi,rangi,jinsi;
 int oyogi, soni;
};
void yoz(hayvonlar hayvonlar[], int n){
 for (int k=0; k<n; k++){
 cout<<"Hayvonning nomi =>";
 cin>>hayvonlar[k].nomi;
 cout<<"Rangi =>";
 cin>>hayvonlar[k].rangi;
 cout<<"jinsi =>";
 cin>>hayvonlar[k].jinsi;
 cout<<" Oyogi =>";
 cin>>hayvonlar[k].oyogi;
 cout<<" Soni =>";
 cin>>hayvonlar[k].soni;
 cout<<endl;
 }
}
void oqi(hayvonlar hayvonlar[], int n){
 for (int k=0; k<n; k++){
 cout<<"Hayvonning nomi=>"<<hayvonlar[k].nomi<<endl;
 cout<<"Rangi=>"<<hayvonlar[k].rangi<<endl;
 cout<<"Jinsi=>"<<hayvonlar[k].jinsi<<endl;
 cout<<" Oyogi=>"<<hayvonlar[k].oyogi<<endl;
 cout<<" Soni=>"<<hayvonlar[k].soni<<endl;
 cout<<endl;
 }
}
int main(){
int n;
cout<<"Nechta hayvon kiritmoqchisiz? "; cin>>n;
hayvonlar a[n];
cout<<endl;
yoz(a,n);
cout<<endl<<"Kiritilgan hayvonlar\n";
oqi(a,n);
}