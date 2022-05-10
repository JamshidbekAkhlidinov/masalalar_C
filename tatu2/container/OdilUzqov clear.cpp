#include<iostream>
#include<list>
using namespace std;
int main(){
  int n;
  list <int> royxat={5,7,6,2,9,15};
  list <int> royxat1 = royxat;
  cout<<"Ro'yxat elementlari -> "<<"\n";
  for(auto s: royxat)
  cout<<s<<"\n";
  cout<<"\n";
  n=royxat.size();
  cout<<"Ro'yxat uzunligi -> "<<"n = "<<n<<"\n"<<"\n";
  cout<<"Ro'yxat element(lar)i ochirilgandan keyin -> "<<"\n"<<"\n";
  if(n%2==0){
    for(int i=0;i<n/2+1;i++){
      royxat.pop_back();  
      }  
    for(auto s: royxat)
    cout<<s<<"\n";
    for(int i=n;i>n/2-1;i--){
      royxat1.pop_front();  
      }  
    for(auto d: royxat1)
    cout<<d<<"\n";
  }else{
    for(int i=0;i<n/2+1;i++){
      royxat.pop_back();  
      }  
    for(auto s: royxat)
    cout<<s<<"\n";
    for(int i=n;i>n/2;i--){
      royxat1.pop_front();  
      }  
    for(auto d: royxat1)
    cout<<d<<"\n";
  }
}