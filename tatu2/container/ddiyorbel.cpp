
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
namespace Diyorbek{
  bool by_first_value(pair<string, float>& a,
         pair<string, float>& b)
  {
    return a.first < b.first;
  }

  bool by_second_value(pair<string, float>& a,
         pair<string, float>& b)
  {
    return a.second < b.second;
  }

  class Magazin{
  public:
    string name;
    string adress;
    string manager;
    vector<pair<string, float>> products;
    set <string> pro2;

    Magazin(){
      cout << "Magazin nomini kiriting: "; getline(cin, name);
      cout << "Magazin  manzilini kiriting: "; getline(cin, adress);
      cout << "Magazin menejerini kiriting: "; getline(cin, manager);
    }
    Magazin(string _name, string _adress, string _manager){
      name = _name;
      adress = _adress;
      manager = _manager;
    }

    void kiritish(){
      int n; string product_name; float product_price;
      cout << "Nechta mahsulot kiritmoqchisiz: "; cin >> n;
      for(int i=0; i<n; i++){
        cout << i+1 << "-mahsulot ma'lumotlarini kiriting: " << endl;
        cout << "\tMahsulot nomi: "; cin >> product_name;
        cout << "\tMahsulot narxi: "; cin >> product_price;
        products.push_back(pair<string, float>(product_name, product_price));
        pro2.insert(product_name);
      }
    }

    void ozgartirish(){
      int k; string product_name; float product_price;
      int size = products.size();
      cout << "Qaysi raqamdagi mahsulotni o'zgartirmoqchisiz? " << endl;
      cout << "1-" << size << " oralig'ida son kiriting: "; cin >> k;
      if(k>0 && k<size){
        cout << "\tOldingi ma'lumotlar:" << endl;
        cout << "\t" << products.at(k-1).first << " - " << products.at(k-1).second << " so'm" << endl;
        cout << "\tYangi ma'lumotlar:" << endl;
        cout << "\t\tMahsulot nomi: "; cin >> product_name;
        cout << "\t\tMahsulot narxi: "; cin >> product_price;
        products.at(k-1) = pair<string, float>(product_name, product_price);
      }else{
        cout << "Bunday mahsulot yo'q!" << endl;
      }

    }

    void saralash(){
      cout << "Mahsulotlarni nimasi bo'yicha saralaymiz: " << endl;
      cout << "1) Nomi bo'yicha" << endl;
      cout << "2) Narxi bo'yicha" << endl;
      int n;
      cout << "1 yoki 2 tanlang: "; cin >> n;
      switch(n){
      case 1:
        // Nom bo'yicha
        sort(products.begin(), products.end(), by_first_value);
        break;
      case 2:
        // Narx bo'yicha
        sort(products.begin(), products.end(), by_second_value);
        break;
      default:
        cout << "Faqat 1 yoki 2-maydonni tanlang!" << endl;
        saralash();
      }
    }

    void qidirish(){
      cout << "Mahsulotlarni nimasi bo'yicha qidiramiz: " << endl;
      cout << "1) Nomi bo'yicha" << endl;
      cout << "2) Narxi bo'yicha" << endl;
      int n;
      cout << "1 yoki 2 tanlang: "; cin >> n;
      string nom; float narx; int count=0;
      switch(n){
      case 1:
        // Nom bo'yicha qidiruv
        cout << "Qaysi nomdagi mahsulotni qidiramiz: "; cin >> nom;
        for(auto it=products.begin(); it != products.end(); it++){
          if(it->first == nom){
            cout << it->first << " - " << it->second << " so'm" << endl;
            count++;
          }
        }
          cout << "Jami " << count << " ta mahsulot topildi." << endl;
        break;
      case 2:
        // Narx bo'yicha qidiruv
        cout << "Qancha narxdagi mahsulotni qidiramiz: "; cin >> narx;
        for(auto it=products.begin(); it != products.end(); it++){
          if(it->second == narx){
            cout << it->first << " - " << it->second << " so'm" << endl;
            count++;
          }
        }
         for(auto it=pro2.begin(); it != pro2.end(); it++){
	        cout << "\t"<<*it;
	      }
          cout << "Jami " << count << " ta mahsulot topildi." << endl;    
        break;
      default:
        cout << "Faqat 1 yoki 2-maydonni tanlang!" << endl;
        qidirish();
      }
    }


void print(){
      cout << "Magazin " << name << endl;
      cout << "Manzili: " << adress << endl;
      cout << "Menejer: " << manager << endl;
      cout << "Mahsulotlari:" << endl;
      int i=1;
      for(auto it=products.begin(); it != products.end(); it++){
        cout << "\t" << i << ") " << it->first << " - " << it->second << " so'm" << endl;
        i++;
      }
       for(auto it=pro2.begin(); it != pro2.end(); it++){
        cout << "\t"<<*it;
      }
    }

    void print_products(){
      cout << "Mahsulotlar ro'yxati:" << endl;
      int i=1;
      for(auto it=products.begin(); it != products.end(); it++){
        cout << "\t" << i << ") " << it->first << " - " << it->second << " so'm" << endl;
        i++;
      }
       for(auto it=pro2.begin(); it != pro2.end(); it++){
        cout << "\t"<<*it;
      }
    }


  };

}

using namespace Diyorbek;
int main()
{
  int number;
  Magazin m;
  m.kiritish();
  cout << endl;
  m.print();
  
  do{
    cout << endl << endl;
    cout << "1) O'zgartirish" << endl;
    cout << "2) Saralash" << endl;
    cout << "3) Qidirish" << endl;
    cout << "4) Jami ma'lumotlar" << endl;
    cout << "0 - exit" << endl << endl;
    cout << "Kerakli metodni tanlang: "; cin >> number;
    switch(number){
      case 0:
        break;
      case 1:
        {
          cout << "O'zgartirish metodi:" << endl;
          m.ozgartirish();
          m.print_products();
        }
        break;
      case 2:
        {
          cout << "Saralash metodi:" << endl;
          m.saralash();
          m.print_products();
        }
        break;
      case 3:
        {
          cout << endl << endl;
          cout << "Qidirish metodi:" << endl;
          m.qidirish();
        }
        break;
      case 4:
        cout << endl << endl;
        m.print();
        break;

      default:
        {
          cout << "Bunday buyruq mavjud emas!" << endl;
        }
        break;
    }
    
  }
  while(number != 0);

  system("pause");
  return 0;
}