#include <iostream>
#include <string>
using namespace std;
  //program for demonstratiion of using ublic class

  // creating a class
class student {
public:
string myname;
int rollnum;
int stdclassid;

void display(){
  // inside the class member function
cout<<"i am inside the class\n";
}
void showme();
}; 

// outside the class member function
void student:: showme(){
cout<<"i am outside of class" ; 
}
int main ()

{
student obj;
obj.myname="Rajiv Ranjan";
obj.rollnum=43;
obj.stdclassid=12005804;

cout<<"my name is "<<obj.myname<<endl;
cout<<"my roll no is "<<obj.rollnum<<endl;
cout<<"my class is "<<obj.stdclassid<< endl;
student s1;
cout<< sizeof(s1)<<endl;
obj.display();
obj.showme();
return 0;
}