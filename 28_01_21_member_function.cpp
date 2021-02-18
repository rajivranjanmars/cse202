 // program to show what is a member variable and how we use it

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

// creating a class named student 
class student{
  public : 
  /* declaration of class student as  public 
  although by default ,members are public
   *public  members are  accessiible from anywhere in the program
    */

   // creating three member variables 
    string myname;
    int rollnum;
    int stdclass;

    /* member variables of a class can be declared in two folllowing  way
     * inside the class
     * outside the class
    */
     
     // creating member variable by inside declaration method
     void display(){
        cout << "Display is declared  inside the class." << endl; 
     }

    // creating a member variable which is declared later outside

    void showme();

};

// creating member variable for class student using outside declaration metdhod
// outside declaration method uses scope resolution operator " :: " to declare member function
void student :: showme(){
    cout <<  "Showme is declared outside the function." << endl;
}


int main(){
    // creating the object obj1 of class student           
    student obj;
    obj.myname="Rajiv Ranjan";
    obj.rollnum=43;
    obj.stdclass=10;

    // outputting the value stored in variable data menmbers
    cout << "My name is " << obj.myname << " .\n";
    cout << "My roll number is " << obj.rollnum << " .\n";
    cout << "My class is " << obj.stdclass << endl;

   // outputting the value stored in function data menmbers
    obj.display();
    obj.showme();

 return 0;
}