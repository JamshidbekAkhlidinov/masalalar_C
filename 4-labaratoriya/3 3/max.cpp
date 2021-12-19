#include<iostream>
using namespace std;
class mijoz{
public:
string ismi, familyasi,jinsi;
int ish_haqi;
};
void yozish(mijoz mijoz[], int n){
for (int k=0; k<n; k++){
cout<<"Ismi = ";
cin>>mijoz[k].ismi;
cout<<"familyasi = ";
cin>>mijoz[k].familyasi;
cout<<"jinsi = ";
cin>>mijoz[k].jinsi;
cout<<"ish haqi= ";
cin>>mijoz[k].ish_haqi;
cout<<endl;
}
}
void oqish(mijoz mijoz[], int n){
for (int k=0; k<n; k++){
cout<<"ismi = "<<mijoz[k].ismi<<endl;
cout<<"familyasi = "<<mijoz[k].familyasi<<endl;
cout<<"jinsi = "<<mijoz[k].jinsi<<endl;
cout<<"ish haqi = "<<mijoz[k].ish_haqi<<endl;
cout<<endl;
}
}

void max(mijoz mijoz[], int n){
	int max = mijoz[0].ish_haqi,p=0;
	for(int k=0 ; k<n; k++){
		if(max<mijoz[k].ish_haqi){
			max = mijoz[k].ish_haqi;
			p=k;
		}
	}
cout<<"Eng katta maosh oladigan inson"<<endl;
cout<<"ismi = "<<mijoz[p].ismi<<endl;
cout<<"familyasi = "<<mijoz[p].familyasi<<endl;
cout<<"jinsi = "<<mijoz[p].jinsi<<endl;
cout<<"ish haqi = "<<mijoz[p].ish_haqi<<endl;
cout<<endl;

}


int main(){
int n;
cout<<"Ma'lumotlar soni = "; cin>>n;
mijoz a[n];
cout<<endl;
yozish(a,n);
cout<<endl<<"Kiritilgan ma'lumotlar\n";
oqish(a,n);

max(a,n);



}