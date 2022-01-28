#include <iostream>

using namespace std;

int main(){
	
	int oy, kun, son, k;
	
	cin >> son;
	
	k = 0;
	
	for (int i = 1; i <= 12; i++){  
	if (i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12){
		 k = 31;
		 }else if (i == 2){ k = 28;}
	      else if (i == 4 or i ==6 or i == 9 or i ==11) {k = 30;} oy++;
	 son = son - k;
	 if (son <= 0) { son = son + k; break; }
	}
	
	cout << "oy " << oy << ", kun " << son; 
	
	return 0;
}