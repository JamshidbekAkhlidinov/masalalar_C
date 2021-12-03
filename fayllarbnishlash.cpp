#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){
	string path = "myfile.txt";
//yozish uchun
//	ofstream fout;
////	fout.open(path);
//	 fout.open(path, ofstream::app);  //davomidan yozish
//	if(!fout.is_open()){
//		cout<<"Fayl topilmadi"<<endl;
//	}else{
//		fout<<"Hello";
//		fout<<"\n";
//	
//	}
//	
//	fout.close();
//	


ifstream oqish;
oqish.open(path);
oqish;
}