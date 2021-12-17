
#include<iostream>
using namespace std;
class Xaridor
{
public:
    string ismi;
    int raqami;
    string manzili;
    string familiya;
    Xaridor(string n,int t,string m,string v){
    ismi=n;
    raqami=t;
    manzili=m;
    familiya=v;
    }
    void show()
    {
        cout<< "Ismi "<<ismi<<"\nFamiliyasi "<<familiya<<"\nRaqami "<<raqami<<" "<<"\n Manzili "<<manzili<<endl;
    }
};
int main()
{
    Xaridor g("Uchqun",23,"9-uy","Umurov");   g.show();
   return 0;
}