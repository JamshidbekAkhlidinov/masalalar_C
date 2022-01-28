#include <iostream>
using namespace std;
class kitob {
         protected:
                   string kitob;
					int som;
         public:
            void set(string a, int b) { 
				kitob = a;
				som = b;
			}
            void show() { 
				cout << "Kitob: "<< kitob << "\n"; 
				cout << "Som: "<< som << "\n"; 
			}
};	
class daftar : public kitob {
         string daftar;
         float fSom;
		 public:
		    void setk() { 
				daftar = kitob;
				fSom = som/2;
			}
			 
		    void showk() { 
				cout << daftar <<" Daftar\n"; 
				cout << fSom << " Som\n"; 
				
			}
};
int main()
{
         daftar ob;
         ob.set("Katta",10000);
         ob.show();
         ob.setk();
		 ob.showk(); 

}