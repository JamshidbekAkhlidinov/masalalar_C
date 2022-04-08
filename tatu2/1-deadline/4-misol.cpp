#include <iostream> 
using namespace std; 
 
namespace Ruchka { 
 class Ruchka { 
  public: 
   string rangi;
   float narxi,ogirligi;  
   int yili;
   
   void kiritish(Ruchka  a[], int n){ 
   for(int i=1; i<=n; i++){ 
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
    if(qidir==a[i].nomi){ 
     cout<<"rangi "<<a[i].rangi<<endl; 
 	 cout<<"narxi "<<a[i].narxi<<endl; 
	 cout<<"ogirligi "<<a[i].ogirligi<<endl; 
	 cout<<"yili "<<a[i].yili<<endl; 
    } 
   } 
  }
    
 }; 
  
    
} 
 
using namespace Ruchka ; 
 
int main(){ 
  
  
 int n; 
 string qidir; 
 cout<<"Nechta mmalumot kiritmoqchisiz? "; cin>>n; 
 
  Moshina deff[100]; 
  deff[100].kiritish(deff,n); 
  deff[100].chiqarish(deff,n);  
  
 
   
}