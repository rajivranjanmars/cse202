#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

string str( int age){
    if (age>18)
    return "eligible ";
    else
    return " not eligible ";

}


int main(){



 int age;
 cin >> age;
 cout  << " the person is " << str(age) << "for voting."   ;          
 return 0;
}