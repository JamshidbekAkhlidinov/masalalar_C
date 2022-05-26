#include <iostream>
#include <stack>
using namespace std;
void findMax(stack<int> s)
{
  int m = s.top(); 
    int a;
  while (!s.empty())
  {
    a = s.top();
    if (m < a)
      m = a; 
    s.pop(); 
  }
  cout << "\nstekning eng katta qiymati: " << m << endl;
}
void show(stack<int> s)
{
  while (!s.empty())
  {
    cout << "  " << s.top();
    s.pop();               
  }
  cout << endl;
}

int main()
{  
  cout << "stekda max qiymatini topish  \n";
  int i;
  stack<int> s;
  s.push(4);
  s.push(2);
  s.push(20);
  s.push(12);
  s.push(52);
  s.push(14);
  cout << "stek elementlari: ";
  show(s);
  findMax(s); 
  
}
