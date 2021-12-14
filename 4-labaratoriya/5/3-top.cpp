#include <iostream>
using namespace std;
class Prizma{
	public:
		void Prizma_help(){
		cout<<"Prizma (yunoncha: prisma — qirqilgan, arralangan) — ikki yogi (P.ning asoslari) teng va parallel koʻpburchak, boshqa yoklari (P.ning yoklari) parallelogramm boʻlgan koʻpyoqlik. Parallelogrammlar P.ning har ikki asosi bilan umumiy tomonlarga ega boʻlishi ke-rak. P.ni yoʻnaltiruvchisi koʻpburchak boʻlgan silindr deb qarash mumkin. Yon qirralari asosiga perpendikulyar boʻlgan P. toʻgʻri , aks holda ogʻma P. deyiladi (rasmga q.). Asosi muntazam a b v g koʻpburchakdan iborat toʻgʻri P. muntazam deyiladi. Asosining shakliga karab P. uch burchakli, toʻrt burchakli va boshqa deb yuritiladi. P.ning hajmi asos yuzi bilan balandligi (asoslari orasidagi masofa) koʻpaytmasiga teng\n\n";
		}
		void Prizma_hajm(int a, int b, int h){
		float v;
		v = a*b*h;
		cout<<"V="<<v;
		}
		void Prizma_sirt(int a, int b, int h){
		float s;	
		s = 2*(a*b+a*h+b*h);	
		cout<<"\nS="<<s;
		}
};
int main(){
	Prizma Prizma;
	int a,b,h;
	Prizma.Prizma_help();
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"h=";
	cin>>h;
	cout<<endl;
	Prizma.Prizma_hajm(a,b,h);
	Prizma.Prizma_sirt(a,b,h);
	
}