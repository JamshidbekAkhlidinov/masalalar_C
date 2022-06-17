#include<conio.h>
#include<list>
#include<unordered_map>
#include <typeinfo>
#include <cstddef> // std::size_t
#include <valarray> // std::valarray, std::slice
using namespace std;
using namespace System;
int main(array<System::String> args)
{std::valarray<int> sample(12);
for (int i = 0; i < 13; ++i)
sample[i] = i;
std::valarray<int> bar = sample[std::slice(2, 3, 4)];
std::cout << "slice(2, 3, 4):";
for (std::size_t n = 0; n < bar.size(); n++)
std::cout <<" "<< bar[n];
std::cout << "n=";
getch(); }