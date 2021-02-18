// program to show what is a class and how we use it

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

// creating a class named student 
class student{
  public : 
  /* declaration of class student as  public 
  although by default members are public
   *public  members are accessiible from anywhere in the program
    */
    string myname;
    int rollnum;
    int stdclass;
};



int main(){
    // creating the object obj1 of class student           
    student obj1;
    obj1.myname="Rajiv Ranjan";
    obj1.rollnum=43;
    obj1.stdclass=10;

    //creating an 2nd object of student
    student obj2;
    obj2.myname="Rahul sharma";
    obj2.rollnum=32;
    obj2.stdclass=10;


// outputting the value stored in data menmbers
    cout << "My name is " << obj1.myname << " .\n";
    cout << "My roll number is " << obj1.rollnum << " .\n";
    cout << "My class is " << obj1.stdclass << endl;

    cout << endl << "My name is " << obj2.myname << " .\n";
    cout << "My roll number is " << obj2.rollnum << " .\n";
    cout << "My class is " << obj2.stdclass << endl;

 return 0;
}