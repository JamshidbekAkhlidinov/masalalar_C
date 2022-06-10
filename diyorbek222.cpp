#include <iostream>

using namespace std;

class samalyotlar{
  public:
    int tezligi;
    string nomi;
};

void kirit(samalyotlar a[], int n){
  for(int i=0; i<n; i++){
  cout<<"Samalyotlar tezligi>"; cin>>a[i].tezligi;
  cout<<"Samalyot nomi =>";cin>>a[i].nomi;
  cout<<endl;
  }
}

void sarala(samalyotlar a[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i].tezligi<a[j].tezligi){
				swap(a[i], a[j]);
			}
		}
	}
}

void chiqar(samalyotlar a[], int n){
  for(int i=0; i<n; i++){
  cout<<"Samalyot tezligi =>"<<a[i].tezligi<<endl;
  cout<<"Samalyot nomi =>"<<a[i].nomi<<endl;
}
  
}

int main(){
  int n,i;
  cin>>n;
  samalyotlar a[n];
  kirit(a,n);
  cout<<"\n\nSamalyotlar ";
  sarala(a,n);  
  chiqar(a,n);  
  
  return 0;
}