#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
  string s; int t=1;;
  ifstream oqi("output.txt");
  while(getline(oqi,s)){
    cout<<t<<" => "<<s<<endl;
    t++;
  }
    
    cout<<endl<<t<<" => ta satr bor";
}