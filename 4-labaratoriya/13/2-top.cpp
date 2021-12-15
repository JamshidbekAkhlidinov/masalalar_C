#include <iostream>
using namespace std;

class kompleks{
	public:
	void qosh(float a, float b){
		cout<<a+b<<endl;	
	}
	void ayir(float a, float b){
	cout<<a-b<<endl;
	}	
	void kop(float a, float b){
	cout<<a*b<<endl;
	}	
	void bol(float a, float b){
	cout<<a/b<<endl;
	}	
};


int main(){
	kompleks kompleks;
	kompleks.qosh(2,4);
	kompleks.ayir(2,4);
	kompleks.kop(2,4);
	kompleks.bol(2,4);
	
}
