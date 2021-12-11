#include <conio.h> //_getch() uchun
#include<iostream>
using namespace std;
class Kub{
	public:
		float a;
		Kub(int A){
			a=A;
		}
		float hajmi_top();
};
float Kub::hajmi_top(){
	return a*a*a;
}
int main(){
 int a;
 cout<<"Kubni tomonini kiriting:";
 cin>>a;
 Kub k(a);
 cout<<"Kubning hajmi:"<<k.hajmi_top();
getch();
}