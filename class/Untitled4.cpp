#include <iostream>
using namespace std;
class Teatr {
	public:
		string name;
		string address;
		int price;
		string derector;
		string manager;
void show(){
cout<<"Teatr name is: "<<name<<endl;
cout<<"Teatr address :"<<address<<endl;
cout<<"Teatr price :"<<price<<endl;
cout<<"Teatr derector: "<<derector<<endl;
cout<<"Teatr manager :"<<manager<<endl;
}
};
int main(){
Teatr teatr;
teatr.name="Alisher Navoiy";
teatr.address="Xalqlar Dostligi";
teatr.price=50000;
teatr.derector="Anvar Hoshimov";
teatr.manager="Islom Bahromov";
teatr.show();
return 0;
}