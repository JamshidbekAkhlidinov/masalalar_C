#include <iostream>
#include <conio.h>
using namespace std;

int main(void){
//Declare variables
int number_entered;
//Get inputs    
cout << "This program lists all prime numbers from 1 through a positive number entered."<< endl;
cout << "Please enter a positive integer." << endl;
cin >> number_entered;
cout << "Displaying all numbers from 1 to " << number_entered<< endl<< "Press any key to continue..."<< endl;
getch();

for(int number_test = 2; number_test < number_entered; number_test++){
    for(int divisor = 2; divisor < number_test; divisor++){
        if(number_test % divisor == 0){
            break;
        }
        else if(number_test % divisor != 0){
            cout << number_test << " ";
            break;
        }
    }
}

getch();
}