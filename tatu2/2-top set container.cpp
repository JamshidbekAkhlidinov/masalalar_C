#include <iostream>
#include <stdlib.h>
#include <set>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    multiset <string> top1;
    multiset <string> top2;
    int n;
    cout << "\n  To'plamdagi elementlar soni nechta bo'lishini hohlaysiz: ";
    cin >> n;
    string soz;
    for(int i = 0; i < n; i++)
    {
        cout << "\n " << i + 1 << "-so'z:\n  ";
        if( i == 0 )
        {
        getline(cin, soz);
        cout << "";
        getline(cin, soz);
        cout << "";
        }
        else
        getline(cin, soz);
        
        top1.insert(soz);  
    }
    string top = " ";
    for( auto it : top1 )
    {
        soz = it;
        auto inde = soz.find(top);
        if( inde == string::npos )
        {
            top2.insert(it);
            top1.erase(it);
        }
    }
    int sana = 0;
    cout << "\n  1-to'plam (biitta so'zdan ko'p bo'lgan elementlari):\n";
    for( auto it : top1 )
    {
        cout << ++sana << ". " << it << endl;
    }
    sana = 0;
    cout << "\n  2-to'plam (faqat biitta so'zdan iborat bo'lgan 1-to'plam elementlari):\n";
    for( auto it : top2 )
    {
        cout << ++sana << ". " << it << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}