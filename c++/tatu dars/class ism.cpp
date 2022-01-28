#include <iostream>
using namespace std;
class shaxars {
         protected:
                   string shaxar;
					string qishloqq;
         public:
            void set(string a, string b) { 
				shaxar = a;
				qishloqq = b;
			}
            void show() { 
				cout << "Shaxar: "<< shaxar << "\n"; 
				cout << "Qishloq: "<< qishloqq << "\n"; 
			}
};	
class qishloq : public shaxars {
         string shax;
         string qish;
		 public:
		    void setk() { 
				shax = shaxar;
				qish = qishloqq;
			}
			 
		    void showk() { 
				cout << shax << "\n"; 
				cout << qish << "\n"; 
				
			}
};
int main()
{
         qishloq ob;
         ob.set("Toshknet","Yunusobod");
         ob.show();
         ob.setk();
		 ob.showk(); 

}