#include <iostream>
using namespace std;
class xayvonlar {
         protected:
                   string nomi;
					string turi;
         public:
            void set(string a, string b) { 
				nomi = a;
				turi = b;
			}
            void show() { 
				cout << "Nomi: "<< nomi << "\n"; 
				cout << "turi: "<< turi << "\n"; 
			}
};	
class xayvon : public xayvonlar {
         string nom;
         string tur;
		 public:
		    void setk() { 
				nom = nomi;
				tur = turi;
			}
			 
		    void showk() { 
				cout << nom << "\n"; 
				cout << tur << "\n"; 
				
			}
};
int main()
{
         xayvon ob;
         ob.set("Olapar","it");
         ob.show();
         ob.setk();
		 ob.showk(); 

}