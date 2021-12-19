#include <iostream>
#include <string>
#include <windows.h>
#include <clocale>

using namespace std;
int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout<<"Введите похожую строку(обязательно заканчивается восклицательный знак должен быть)\n";
    cout<<"с 02.12.19-по 07.12.19 неделя контрольных работ!\n";
    string a;
    getline(cin,a);
    int kol_str=0;
    for(int q=0;;q++){
        if(a[q]=='!'){
            kol_str++;
            break;
        }
            kol_str++;
    }
    int kol_sim=0;
    for(int q=32;q<=126;q++){
    for(int sch=0;sch<kol_str;sch++){
        if(a[sch]==static_cast<char>(q)){
            kol_sim++;
        }
    }
    }
a[kol_str-1]=' ';
if(a[20]=='.'){
    a.insert(23," прервая");
    a.insert(37," зимы");
}else if(a[21]=='.'){
    a.insert(24," прервая");
    a.insert(38," зимы");
}else if(a[19]=='.'){
    a.insert(22," прервая");
    a.insert(36," зимы");
}
cout<<a<<"\n";
cout<<"количество символов="<<kol_sim<<"\n";
    return 0;
}