#include <iostream>
using namespace std;
class ratsional{
	public:
		double a;
		double b;
		double r;
		
	public:
		int tenglik(double a,double b){
			if(a==b){
				cout<<"teng";
			}else{
				cout<<"teng emas";
			}
		}
		int qosh(double a,double b){
			 r = a+b;
			cout<< r;
		}
		
};
int main(){
	ratsional son;
		double a;
		double b;
		cout<<"a,b =>"; cin>>a>>b;
	son.tenglik(a,b);
	cout<<endl;
	son.qosh(a,b);
}