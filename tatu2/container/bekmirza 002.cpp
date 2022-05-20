#include<iostream>
#include<map>
using namespace std;
class litseylar{
  public:
  string direktor_FIO;
  int xodimN;
  int o_soni;
  int profsN;
};
void show(string s, litseylar kaf){
  cout << "Litsey nomi : " << s << "\nDirector ismi : " << kaf.direktor_FIO << "\nO'quvchilar soni : " << kaf.xodimN << 
  "\nO'qituvchilar soni : " << kaf.o_soni << "\n";
}
int main(){
  map<string, litseylar> map1;
  litseylar litsey;
  string kaf_nom;
  int n;
  cout<<"litseylar sonini kiriting : ";
  cin>>n;
  cout<<"\n";
  for(int i=0; i<n; i++){
    cin.ignore();
    cout<<"Litsey nomini kiriting : ";
    getline(cin, kaf_nom);
    cout<<"Director ismini ismini kiriting : ";
    getline(cin, litsey.direktor_FIO);
    cout<<"O'qituvchilar  sonini kiriting : ";
    cin>>litsey.xodimN;
    cout<<"O'quvchilar sonini kiriting : ";
    cin>>litsey.o_soni;
    cout<<"\n";
    map1.insert(pair<string,litseylar>(kaf_nom, litsey));
  }
  cout << "Qaysi parametr orqali qidirmoqchisiz ? \nLitsey nomi orqali (1) : \n" << 
  "O'quvchilar soni orqali (2) : \nDirektor ismi sharifi orqali (3):\nO'qituvchilar soni orqali (4) : \n--> ";
  int p; cin >> p;
  switch(p){
    case 1 : {
      string s;
      cin.ignore();
      cout << "Qidirilayotgan Litsey nomini kiriting : ";getline(cin, s);
      for(auto i = map1.begin(); i != map1.end(); i++){
        if(i->first == s){
          show(i->first, i->second); 
        }
      } 
      break;
    }
    case 2 : {
      string a;
      cin.ignore();
      cout << "Qidirilayotgan litsey direktor FIOsi kiriting : ";getline(cin, a);
      for(auto i = map1.begin(); i != map1.end(); i++){
        if(i->second.direktor_FIO == a){
          show(i->first, i->second); 
        }
      } 
      break;
    
}
    case 3 : {
      int b;
      cout << "Qidirilayotgan litsey o'quvchilar sonini kiriting : "; cin>>b;
      for(auto i = map1.begin(); i != map1.end(); i++){
        if(i->second.o_soni == b){
          show(i->first, i->second); 
        }
      } 
      break;
}
    case 4 : {
      int c;
      cout << "Qidirilayotgan litsey O'qituvchilar sonini kiriting : "; cin>> c;
      for(auto i = map1.begin(); i != map1.end(); i++){
        if(i->second.profsN == c){
          show(i->first, i->second); 
        }
      } 
      break;
    }
  }
}