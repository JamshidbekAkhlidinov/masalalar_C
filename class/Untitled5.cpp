
#include <iostream>
#include <string>
using namespace std;
class Marketlar 
{
  public:
  string nomi;
  string manzili;
  string ochilgankuni;
  int ishchilarsoni ;
  string direktori;
  
  void kirit()
  {
    cout<<"Nomi:"; cin>>nomi;
    cout<<"Manzili:"; cin>>manzili;
    cout<<"Ochilgankuni:"; cin>>ochilgankuni;
    cout<<"Ishchilarsoni:"; cin>>ishchilarsoni;
    cout<<"Direktori:"; cin>>direktori;
  }
  
  void chiqar()
  {
   cout<<"Nomi:"; cin>>nomi;
    cout<<"Manzili:"; cin>>manzili;
    cout<<"Ochilgankuni:"; cin>>ochilgankuni;
    cout<<"Ishchilarsoni:"; cin>>ishchilarsoni;
    cout<<"Direktori:"; cin>>direktori;
  }
};

int main()
{
  Marketlar m1;
 m1.kirit();
 cout<<endl;
 
 m1.chiqar();
 cout<<endl;
 
cout<<"\nKorzinka.uz"<<endl;
  
}