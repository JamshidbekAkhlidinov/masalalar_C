#include <iostream>
#include <queue>
#include <time.h>
using namespace std;

int main() {
  queue<int> a;
  queue<int> copy;
  int temp;
  srand(time(0));
  cout<<"Navbat uzunligini kiritng : "<<endl;
  int n;
  cin>>n;
  cout<<"Elementlar : "<<endl;
  for(int i=0; i<n; i++){
    temp = 1+rand()%20;
    a.push(temp);
  }
  int min= a.front();
  int i = 0;
  int index =0;
  while(!a.empty()){
    if(min>a.front()){
      min = a.front();
      index = i;
    }
      copy.push(a.front());
    i++;
    a.pop();
  }
  cout<<"\nMin = "<<min<<"\n\n";
  a = copy;
  queue<int> copy1;
  i=0;
  while(!a.empty()){
    copy1.push(a.front());
    if(index==i){
      copy1.push(0);
    }
    i++;
    a.pop();
  }
  
  
    while(!copy1.empty()){
    cout<<copy1.front()<<" ";
    copy1.pop();
  }
  return 0;
}