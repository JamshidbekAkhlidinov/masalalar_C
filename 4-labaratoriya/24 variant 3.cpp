#include <iostream>
using namespace std;
class shakllar{
	public:
		shakllar2(int){
			cout<<"Uchburchak\n";
			
		}
		shakllar2(char){
			cout<<"Tortburchak\n";
			
		}
		shakllar2(string){
			cout<<"Aylana\n";
			
		}
};
int main(){
	shakllar shakllar;
	shakllar.shakllar2(12);
	shakllar.shakllar2('s');
	shakllar.shakllar2("salom");
	
}