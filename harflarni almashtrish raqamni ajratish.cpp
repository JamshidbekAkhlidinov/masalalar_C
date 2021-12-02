#include <iostream> 
#include <string> 
 
using namespace std; 
 
int main(){ 
 char s[100]; 
 string raqam=""; 
  
 cout<<"Malumotlar =>"; cin.getline(s,sizeof(s)); 
 for(int i=0; i<sizeof(s); i++){ 
  if(s[i] == toupper(s[i])){ 
   s[i] = tolower(s[i]); 
  }else{ 
   s[i] = toupper(s[i]); 
  } 
  if(isdigit(s[i])){ 
   raqam = raqam + s[i]; 
  } 
 }  
 raqam = raqam.erase(raqam.length()-1,1); 
  
 cout<<s<<endl; 
 cout<<raqam<<endl; 
 
}