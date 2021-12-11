#include <iostream>
#include <string.h>
using namespace std;
class Talaba{
	private: 
		string ism;
		int yosh;
	public:
		string getIsm(){
			return ism;
		}
	void setIsm(string ismi){
		ism=ismi;
	}
	int getYosh(){
		return yosh;
	}
	void setYosh(int yoshi){
		yosh=yoshi;
	}
};
int main() {
int n,yosh;
cout<<"n=";
cin>>n;
string ism,ismKirit;
Talaba *t[n];
for(int i=0;i<n;i++)
{
 cout<<i+1<<"-chi talabani ismini kiriting: ";
 cin>>ism;
 cout<< "Yoshini kiriting: ";
 cin>>yosh;
 t[i]=new Talaba;
 t[i]->setIsm(ism);
 t[i]->setYosh(yosh);

}
cout<<endl;
cout<<"Qidirilayotgan talabani ismini kiriting:"<<endl;
cin>>ismKirit;
cout<<"Qidirilayotgan talaba haqida ma'lumot: "<<endl;
for(int i=0;i<n;i++)
{
if(ismKirit.compare(t[i]->getIsm())==0)
{
cout<<t[i]->getIsm()<<endl;
cout<<t[i]->getYosh()<<endl;
}
}
return 0;
}