#include <iostream> 
using namespace std; 
 
namespace RuchkaN { 
 class Ruchka { 
  public: 
   string rangi;
   float narxi,ogirligi;  
   int yili;
   
   void kiritish(Ruchka  a[], int n){ 
   for(int i=1; i<=n; i++){ 
    cout<<i<<" - malumot\n";
    cout<<"Rangi "; cin>>a[i].rangi; 
    cout<<"narxi "; cin>>a[i].narxi; 
	cout<<"Ogirligi "; cin>>a[i].ogirligi; 
	cout<<"Yili "; cin>>a[i].yili; 
   } 
  } 
  
  void saralash(Ruchka a[], int n){
  	for(int i=1; i<=n; i++){
  		for(int j=0;j<=n; j++){
  			if(a[i].narxi>a[j].narxi){
  				swap(a[i],a[j]);
			  }
		  }
	  }
  }
   
  void chiqarish(Ruchka  a[], int n){ 
   string qidir; 
   cout<<"Qidirish uchun nomni kiriting! "; cin>>qidir; 
   for(int i=1; i<=n; i++){ 
    if(qidir==a[i].rangi){ 
    cout<<i<<" - malumot\n";
     cout<<"rangi "<<a[i].rangi<<endl; 
 	 cout<<"narxi "<<a[i].narxi<<endl; 
	 cout<<"ogirligi "<<a[i].ogirligi<<endl; 
	 cout<<"yili "<<a[i].yili<<endl; 
    } 
   } 
  }
    
 }; 
  
    
} 
 
using namespace RuchkaN ; 
 
int main(){ 
  
  
 int n,d; 
 string qidir; 
 cout<<"Nechta mmalumot kiritmoqchisiz? "; cin>>n; 
 
  Ruchka deff[100]; 
  deff[100].kiritish(deff,n); 
  
  cout<<"Qidirmoqchimisiz =>2 Saralamochimisiz? =>1";
  cin>>d;
  switch(d){
  	case 1: deff[100].saralash(deff,n); 
  	default: deff[100].chiqarish(deff,n);  
  }
  
  
  
 
   
}