#include<iostream>
using namespace std;
 
class Teacher
{
  public:
  char name[30];
  int office_hour;
  char subject_name[30];
  char position[30];
  int subjects_cnt;
  
  public:
   
  // Declaration of function
  void getdata();
   
  // Declaration of function
  void putdata();
};
 
// Defining the function outside
// the class
void Teacher::getdata()
{
  cout << "Enter Name : ";
  cin >> name;
  cout << "Office hour (00 <= int <= 23) : ";
  cin >> office_hour;
  cout << "Subject name : ";
  cin >> subject_name;
  cout << "Position : ";
  cin >> position;
  cout << "Subjects count : ";
  cin >> subjects_cnt;
}
 
// Defining the function outside
// the class
void Teacher::putdata()
{
  cout << name << " ";
  cout << office_hour << " ";
  cout << subject_name << " ";
  cout << position << " ";
  cout << subjects_cnt << " ";
  cout << endl;
}
 
// Driver code
int main()
{
  // This is an array of objects having
  // maximum limit of 30 Teachers
  Teacher tec[30];
  Teacher same_name[30];
  Teacher same_office_hour[30];
  Teacher same_position[30];
  Teacher same_subject_cnt[30];
  
  int n, i;
  char name[30];
  char office_h[30];
  char pos[30];
  char sub_cnt[30];
  
  cout << "Enter Number of Teachers - ";
  cin >> n;
   
  // Accessing the function
  for(i = 0; i < n; i++)
    tec[i].getdata();
   
  cout << "Teacher Data - " << endl;
   
  // Accessing the function
  for(i = 0; i < n; i++) {
    tec[i].putdata();
  }
  
  cout << "Enter name you want to group by: ";
  cin >> name;
  cout << "Enter office hour you want to group by: ";
  cin >> office_h;
  cout << "Enter position you want to group by: ";
  cin >> pos;
  cout << "Enter count of subjects you want to group by : ";
  cin >> sub_cnt;
  
  for(i = 0; i < n; i++) {
    if (tec[i].name == name) {
      Teacher c = tec[i];
      same_name[0] = c;
    }
  }
  
  for(i = 0; i < n; i++) {
    same_name[i].name;
  }
}