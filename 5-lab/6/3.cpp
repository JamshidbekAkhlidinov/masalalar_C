#include <iostream>
using namespace std;
class kub{
	public:
		void kub_help(){
		cout<<"Kub (yunoncha: Kubos) (matematikada)  muntazam oltioyoqlik. Kub 6 yoq, 12 qir, 8 uchga ega. Kub yoklari kvadratlardan iborat bo'lib, har qaysi uchida o'zaro perpendikulyar uchtadan qirra birlashadi. Kub simmetriya markazi, 9 tadan simmetriya o'qi va simmetriya tekisligiga ega. Kirrasi a bo'lsa, Kubning sirti 6a2, hajmi a3 ga teng; bir-biriga teng uch ko'paytuvchining ko'paytmasi, ya'ni har qanday sonning uchinchi darajasi, masalan, D a-a-a=a>\n\n";
		}
		void kub_hajm_sirt(int a){
		float v,s;
		v = a*a*a;
		s = 4*a*a;	
		cout<<"V="<<v<<" S="<<s;
	}
};
int main(){
	kub kub;
	int a;
	kub.kub_help();
	cout<<"a=";
	cin>>a;
	cout<<endl;
	kub.kub_hajm_sirt(a);
	
}