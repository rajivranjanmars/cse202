 // program to show what is a constructor and how we use it

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

// creating a class named student 
class student{
  public :  
    string myname;
    int rollnum;
    int stdclass;

// creating a constructor   which will work when called
student (string x, int y,int z){
myname= x;
rollnum= y;
stdclass=z;
}
};
int main(){
    // putting input in object of class student by constructor method            
    student obj( "Rajiv Ranjan",34,54); 

    // outputting the value stored in variable data menmbers
    cout << "My name is " << obj.myname << " .\n";
    cout << "My roll number is " << obj.rollnum << " .\n";
    cout << "My class is " << obj.stdclass << endl;

 return 0;
}