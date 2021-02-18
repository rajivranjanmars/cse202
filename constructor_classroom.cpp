 // writing a program to use constructor

#include<iostream>
#include<string>
using namespace std;
//program for use of constructor
class student {
    public:
string myname;
int rollnum;
int classroom;

student (string x, int y,int z){
myname= x;
rollnum= y;
classroom=z;
}
};

int main()

{

    student s1( "rajiv",34,54);

cout<< "my name is " <<s1.myname<<endl;
cout<< "my roll number is "<< s1.rollnum <<endl;
cout<<"my classroom is "<<s1.classroom<<endl;

}