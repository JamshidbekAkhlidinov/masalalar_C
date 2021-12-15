#include <iostream>
#include <cmath>

using namespace std;

class Kalk_arfmatika{
	public:
		float a,b;
		void kalk_mahandis(float a);
		void qosh(float a, float b){
			cout<<a+b<<endl;
		}void ayir(float a, float b){
			cout<<a-b<<endl;
		}void kop(float a, float b){
			cout<<a*b<<endl;
		}void bol(float a, float b){
			cout<<a/b<<endl;
		}
};

class kalk_mahandis: public Kalk_arfmatika{
	public:
		void ln(float a){
			cout<<log(a)<<endl;
		}
		void sinx(float a){
			cout<<sin(a)<<endl;
		}
		void cosx(float a){
			cout<<cos(a)<<endl;
		}
		void tgx(float a){
			cout<<tan(a)<<endl;
		}
		void sqrtx(float a){
			cout<<sqrt(a)<<endl;
		}
		
};

int main(){
	kalk_mahandis raqam;
	raqam.ayir(3,5);
	raqam.qosh(3,5);
	raqam.kop(3,5);
	raqam.bol(3,5);
	
	raqam.ln(5);
	raqam.cosx(5);
	raqam.sinx(5);
	raqam.tgx(5);
	raqam.sqrtx(5);
	
	
	
}